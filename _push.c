#include "monty.h"

int value;

/**
 * push - pushes a new node with the given value to the stack
 * @stack: double pointer to the head of the stack
 * @line_number: value to be pushed
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	(void)line_number;

	new = createNode(value);

	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
