#include "monty.h"

/**
 * _add_to_top - Adds the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The line number where the add operation is called.
 *
 * Description:
 * This function adds the top two elements of the stack.
 * The result is stored in
 * the second element, and the first element is removed.
 */

void _add_to_top(stack_t **stack, unsigned int line_number)
{
	int sum;
	stack_t *temp, *new_node, *first, *second;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		_free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	sum = 0;
	if (format == 1)
	{
		/*new_node = NULL*/;

		first = *stack;
		second = first->next;

		sum = first->n + second->n;
		new_node = malloc(sizeof(stack_t));
		new_node->n = sum;

		new_node->next = second;
		second->prev = new_node;
		*stack = new_node;

	}
	else
	{
		temp = (*stack)->next;
		sum = (*stack)->n + temp->n;
		_pop(stack, line_number);
		temp->n = sum;
	}
	format = 0;
}
