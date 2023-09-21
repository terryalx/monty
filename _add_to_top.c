#include "monty.h"

/**
 * _add_to_top - Adds the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The line number where the add operation
 * is called.
 *
 * Description:
 * This function adds the top two elements of the stack.
 * The result is stored in
 * the second element, and the first element is removed.
 */
void _add_to_top(stack_t **stack, unsigned int line_number)
{
	int sum;
	stack_t *temp;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n",
				line_number);
		_free_stack(*stack);
		FAIL;
	}

	temp = (*stack)->next;
	sum = (*stack)->n + temp->n;
	_pop(stack, line_number);
	temp->n = sum;
}

