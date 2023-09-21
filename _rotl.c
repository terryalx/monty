#include "monty.h"
/**
 * _rotl -The top element of the stack becomes the last one, and the second top
 * element of the stack becomes the first one
 * @stack: pointer to a stack
 * @n: line number
 * Return: nothing
 */
void _rotl(stack_t **stack, unsigned int n)
{
	stack_t *h = NULL, *t = NULL;

	(void) n;

	if (!stack || !(*stack) || !(*stack)->next)
		return;

	h = *stack;
	t = h->next;
	t->prev = NULL;
	*stack = t;
	while (t->next)
	{
		t = t->next;
	}
	t->next = h;
	h->prev = t;
	h->next = NULL;
}
