#include "monty.h"

/**
 * _push_error - Handles a "push" instruction error.
 * @fd: File descriptor of the Monty bytecode file.
 * @line: Buffer containing the current line.
 * @stack: Pointer to the stack.
 * @line_number: Line number of the "push" command in the Monty bytecode file.
 *
 * Description:
 * This function is called when there is an error with the "push" instruction.
 * It prints an error message indicating the correct usage of the "push"
 * instruction and exits with a failure status.
 */
void _push_error(FILE *fd, char *line, stack_t *stack, int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	fclose(fd);
	free(line);
	_free_stack(stack);
	exit(EXIT_FAILURE);
}
