#include "monty.h"
/**
 * _free - free the stack
 * @stack: ptr to stack
 * Return: Nothing
 */
void _free(stack_t **stack)
{
	stack_t *head = *stack;

	while (head)
	{
		if (!head->next)
		{
			free(head);
			break;
		}
		head = head->next;
		free(head->prev);
	}
}
