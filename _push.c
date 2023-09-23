#include "monty.h"

int value;

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

	stack_t *new_node = createNode(value);
	(void)line_number;

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (format == 0)
	{
		new_node->next = *stack;
		if (*stack)
		{
			(*stack)->prev = new_node;
		}
		*stack = new_node;
	}
	else /* was queue*/
	{
		stack_t *temp = *stack;
		if (temp)
		{
			while (temp->next)
				temp = temp->next;
			temp->next = new_node;
			new_node->prev = temp;
		}
		else
		{
			*stack = new_node;
		}
	}
}

