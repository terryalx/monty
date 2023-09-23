#include "monty.h"

/**
 * _print_top_stack - Prints the value at the top of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The current line number.
 *
 * Description:
 * This function prints the value at the top of the stack. If the stack is
 * empty, it prints an error message and exits with a failure status.
 */
void _print_top_stack(stack_t **stack, unsigned int line_number)
{
	if (*stack)
	{
		if (format == 0)
		{
			fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
			_free_all_node(stack);
			exit(EXIT_FAILURE);
		}
		else 
		{
			fprintf(stderr, "L%d: can't pint, queue is empty\n", line_number);
			_free_all_node(stack);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stdout, "%d\n", (*stack)->n);
	}
}

