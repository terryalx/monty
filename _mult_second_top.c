#include "monty.h"

/**
 * _mult_second_top - Multiplies the second top element of the stack with the top element.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The line number where the mul operation is called.
 *
 * Description:
 * This function multiplies the second top element of the stack with the top
 * element. The result is stored in the second top element, and the top element
 * is removed.
 *
 * If the stack is too short, an error message is printed, and the program exits
 * with a failure status.
 */
void _mult_second_top(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int product;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		_free_stack(*stack);
		FAIL;
	}

	temp = (*stack)->next;
	product = temp->n * (*stack)->n;
	_pop(stack, line_number);
	temp->n = product;
}

