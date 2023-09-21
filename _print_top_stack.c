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
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		_free_all_node(stack);
		FAIL;
	}
	else
	{
		fprintf(stdout, "%d\n", (*stack)->n);
	}
}

