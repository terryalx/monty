#include "monty.h"

/**
 * _push - Pushes a new node with the given value onto the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The line number where the push operation is called.
 *
 * Description:
 * This function pushes a new node with the given value onto the stack.
 * It creates a new node using the `createNode` function and adds it to
 * the top of the stack. The `value` variable is used to determine the
 * value to be pushed.
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	(void)line_number;

	new = createNode(value);

	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
