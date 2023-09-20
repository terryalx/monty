#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @stack: double pointer to the head of the stack
 * @line_number: the line number
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *val = NULL;
	int sum = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	val = (*stack)->next;
	sum = (*stack)->n;
	sum += (*stack)->next->n;
	pop(stack, line_number);
	val->n = sum;
}

/**
 * nop - function
 * @stack: double pointer to the head of the list
 * @line_number: the current line number
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
