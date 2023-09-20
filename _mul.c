#include "monty.h"

/**
 * mul - multiplies the second top element of the stack with
 * the top element of the stack.
 * @stack: double pointer to the head of the stack
 * @line_number: the line number
 */
void mul(stack_t **stack, unsigned int line_number)
{

	stack_t *val = NULL;
	int sum = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		_free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	val = (*stack)->next;
	sum = val->n;
	sum *= (*stack)->n;
	pop(stack, line_number);
	val->n = sum;
}
