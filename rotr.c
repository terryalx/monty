#include "monty.h"

/**
 * rotr - stack op rotr
 * @stack: stack
 * @line_number: line number
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	size_t _len;
	stack_t *temp = *stack;

	_len = len(*stack);
	if (_len < 2)
		return;

	for (; temp->next;)
		temp = temp->next;
	(*stack)->prev = temp;
	temp->next = *stack;
	temp->prev->next = NULL;
	temp->prev = NULL;
	*stack = (*stack)->prev;
}
