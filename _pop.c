#include "monty.h"

/**
 * _pop - Removes the top element of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The current line number where the pop operation is called.
 *
 * Description:
 * This function removes the top element of the stack. If the stack is empty,
 * it prints an error message and exits with a failure status. Otherwise,
 * it updates the stack pointers and frees the memory of the removed node.
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		_free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	free(*stack);
	if (temp)
	{
		temp->prev = NULL;
	}
	*stack = temp;
}

