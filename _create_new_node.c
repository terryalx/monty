#include "monty.h"

/**
 * createNode - Creates a new node with the given value.
 * @n: The value of the new node.
 *
 * Return: A pointer to the newly created node.
 */
stack_t *createNode(int n)
{
	stack_t *new = NULL;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		FAIL;
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}
