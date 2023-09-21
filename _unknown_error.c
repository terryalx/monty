#include "monty.h"

/**
 * instr_error - Error handler for unknown instructions.
 * @fd: File descriptor of the Monty bytecode file.
 * @line: Buffer containing the current line.
 * @stack: Pointer to the stack.
 * @val: The unknown instruction.
 * @line_n: Line number of the command in the Monty bytecode file.
 *
 * Description:
 * This function is called when an unknown instruction (opcode) is encountered
 * in the Monty bytecode file. It prints an error message, closes the file
 * descriptor, frees memory, and exits with a failure status.
 */
void _unknown_error(FILE *fd, char *line, stack_t *stack, char *val, int line_n)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_n, val);
	fclose(fd);
	free(line);
	_free_stack(stack);
	FAIL;
}
