#include "monty.h"

/**
 * _pall - Prints all the values on the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The current line number (unused).
 *
 * Description:
 * This function prints all the values on the stack, starting from the top
 * element and moving down to the bottom element. Each value is printed on
 * a separate line.
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

