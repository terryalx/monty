#include "monty.h"

/**
 * _add_to_top - Adds the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The line number where the add operation is called.
 *
 * Description:
 * This function adds the top two elements of the stack. The result is stored in
 * the second element, and the first element is removed.
 */
void _add_to_top(stack_t **stack, unsigned int line_number)
{
	int sum;
	stack_t *temp;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		_free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	sum = (*stack)->n + temp->n;
	if (format == 1) /*Adding to queue*/
	{
		stack_t *new_node = malloc(sizeof(stack_t));
		if (new_node == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
			_free_stack(*stack);
			exit(EXIT_FAILURE);
		}
		new_node->n = sum;
		new_node->prev = NULL;
		new_node->next = *stack;
		(*stack)->prev = new_node;
		*stack = new_node;
	}
	else 
	{
	_pop(stack, line_number);
	temp->n = sum;
	}
}

