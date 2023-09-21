#include "monty.h"

/**
 * _divide_element - Divides the second top element of the stack by the top element.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The line number where the division operation is called.
 *
 * Description:
 * This function divides the second top element of the stack by the top element
 * and stores the result in the second top element. The top element is removed.
 *
 * Usage: div
 * If the stack contains less than two elements, print the error message 
 * L<line_number>: can't div, stack too short, followed by a new line, and exit 
 * with the status EXIT_FAILURE
 * The result is stored in the second top element of the stack, and the 
 * top element is removed, so that at the end:
 * The top element of the stack contains the result
 * The stack is one element shorter
 * If the top element of the stack is 0, print the error message 
 * L<line_number>: division by zero, followed by a new line, 
 * and exit with the status EXIT_FAILURE
 *
 */
void _divide_element(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int quotient;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		_free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		_free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	quotient = temp->n / (*stack)->n;
	_pop(stack, line_number);
	temp->n = quotient;
}

