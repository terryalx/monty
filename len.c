#include "monty.h"

/**
 * len - print doubly linked list
 * @h: list
 * Return: number of nodes
 */
size_t len(const stack_t *h)
{
	size_t nodes = 0;

	for (; h; nodes++)
		h = h->next;

	return (nodes);
}
