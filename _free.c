#include "monty.h"
/**
 * _free - free the stack
 * @stack: ptr to stack
 * Return: Nothing
 */
void _free(stack_t **stack)
{
	stack_t *current = *stack;
	stack_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*stack = NULL;
}
