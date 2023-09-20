#include "monty.h"

/**
 * _free_all_node - Free all nodes in the stack and close files.
 * @stack: Double pointer to the head of the stack.
 *
 * Description:
 * This function frees all nodes in the stack and closes the Monty bytecode
 * file and associated resources. It iterates through the stack and frees
 * each node until the stack is empty. It also frees the `cmd.line` buffer.
 */
void _free_all_node(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (tmp)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
	fclose(cmd.fd);
	free(cmd.line);
}
