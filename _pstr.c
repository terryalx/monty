#include "monty.h"
/**
 * _pstr - prints a string
 * @stack: pointered to a stack
 * @n: line number that opcode is call at.
 */

void _pstr(stack_t **stack, unsigned int n)
{
	stack_t *node;
	(void) n;

	if (!stack || !(*stack))
	{
		fprintf(stdout, "\n");
		return;
	}

	node = *stack;
	while (node)
	{
		if (node->n <= 0 || node->n > 127)
			break;
		fprintf(stdout, "%c", node->n);
		node = node->next;
	}
	fprintf(stdout, "\n");
}
