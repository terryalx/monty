#include "monty.h"

/**
 * _subtract_top - Subtracts the top element from the
 * second top element of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The line number where the sub operation is called.
 *
 * Description:
 * This function subtracts the top element of the stack from the second top
 * element of the stack. The result is stored in the second top element, and
 * the top element is removed.
 *
 * If the stack is too short, an error message is printed, and the program
 * exits with a failure status.
 */
void _subtract_top(stack_t **stack, unsigned int line_number)
{
	int difference;
	stack_t *temp;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n",
				line_number);
		_free_stack(*stack);
		FAIL;
	}

	temp = (*stack)->next;
	difference = temp->n - (*stack)->n;
	_pop(stack, line_number);
	temp->n = difference;
}

