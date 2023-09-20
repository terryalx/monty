#include "monty.h"

/**
 * _free - Free the stack and all its elements.
 * @stack: Pointer to the head of the stack.
 *
 * Description:
 * This function recursively frees the entire stack and all its elements.
 * It starts from the top of the stack and frees each node one by one.
 */
void _free_stack(stack_t *stack)
{
	stack_t *list = NULL;

	list = stack;

	if (list != NULL)
	{
		_free_stack(list->next); /* Recursively free the rest of the stack */
		free(list); /* Free the current node */
	}
}
