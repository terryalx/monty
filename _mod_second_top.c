#include "monty.h"

/**
 * _mod_second_top - Computes the remainder of the division of the second top element
 *       of the stack by the top element of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The line number where the mod operation is called.
 *
 * Description:
 * This function computes the remainder of the division of the second top
 * element of the stack by the top element. The result is stored in the second
 * top element, and the top element is removed.
 *
 * If the stack is too short or if the top element is zero, an error message is
 * printed, and the program exits with a failure status.
 */
void _mod_second_top(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int remainder;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		_free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		_free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	remainder = temp->n % (*stack)->n;
	_pop(stack, line_number);
	temp->n = remainder;
}

