#include "monty.h"

/**
 * divide - Divides the second top element of the stack by the top element.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The line number where the division operation is called.
 *
 * Description:
 * This function divides the second top element of the stack by the top element
 * and stores the result in the second top element. The top element is removed.
 *
 * If the stack is too short or if the top element is zero, an error message is
 * printed, and the program exits with a failure status.
 */
void divide(stack_t **stack, unsigned int line_number)
{
	stack_t *val = NULL;
	int quotient = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		_free(*stack);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		_free(*stack);
		exit(EXIT_FAILURE);
	}

	val = (*stack)->next;
	quotient = val->n / (*stack)->n;
	pop(stack, line_number);
	val->n = quotient;
}
