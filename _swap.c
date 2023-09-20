#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @stack: double pointer to the head of the list
 * @line_number: line number
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *val;
	int tmp = 0;

	val = *stack;
	if (val == NULL || val->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		tmp = val->n;
		val->n = val->next->n;
		val->next->n = tmp;
	}
}
