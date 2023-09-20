#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The line number where the add operation is called.
 *
 * Description:
 * This function adds the top two elements of the stack. The result is stored in
 * the second element, and the first element is removed.
 */
void _add_to_top(stack_t **stack, unsigned int line_number)
{
	stack_t *val = NULL;
	int sum = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		_free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	val = (*stack)->next;
	sum = (*stack)->n;
	sum += (*stack)->next->n;
	pop(stack, line_number);
	val->n = sum;
}
