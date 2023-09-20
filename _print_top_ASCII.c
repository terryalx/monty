#include "monty.h"

/**
 * _print_top_ASCII - Prints the character representation of the top element of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The line number where the _print_top_ASCII operation is called.
 *
 * Description:
 * This function prints the character representation of the top element of the
 * stack. It checks if the stack is empty, if the top element is within the
 * valid ASCII range (0-127), and then prints the character.
 *
 * If the stack is empty or the top element is out of range, it prints an
 * error message and exits with a failure status.
 */
void _print_top_ASCII(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n >= 0 && (*stack)->n <= 127)
		printf("%c\n", (*stack)->n);
	else
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		_free_stack(*stack);
		exit(EXIT_FAILURE);
	}
}
