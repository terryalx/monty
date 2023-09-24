#include "monty.h"
int format;
/**
 * _set_stack_format - sets the format to the stack which is the default.
 * @stack: Pointer to the stack.
 * @line_number: The line number in the Monty
 * Return : nothing.
 */
void _set_stack_format(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	format = 0;
}
/**
 * _set_queue_format - sets the format to the queue.
 * @stack: Pointer to the stack.
 * @line_number: The line number in the Monty
 * Return : nothing.
 */
void _set_queue_format(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	(void)stack;
	/*if (*stack)
	{
		stack_t *temp = *stack;
		while (temp->next)
			temp = temp->next;
		temp->next = *stack;
		(*stack)->prev = temp;
		(*stack) = (*stack)->next;
		(*stack)->prev->next = NULL;
		(*stack)->prev = NULL;
	}*/

	format = 1; /*Set data format to queue*/
}
