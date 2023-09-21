#include "monty.h"

/**
 * _swap_element - Swaps the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The line number where the swap operation is called.
 *
 * Description:
 * This function swaps the top two elements of the stack. If the stack is
 * too short (contains less than two elements), it prints an error message
 * and exits with a failure status.
 */
void _swap_element(stack_t **stack, unsigned int line_number)
{

	int tmp;

	stack_t *val;
	val = *stack;
	if (val == NULL || val->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		_free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	tmp = val->n;
	val->n = val->next->n;
	val->next->n = tmp;
}

