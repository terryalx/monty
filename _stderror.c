#include "monty.h"

/**
 * usage_error - prints an usage error message
 * If the user does not give any file or more than one argument 
 * to your program, print the error message USAGE: 
 * monty file, followed by a new line, and exit with the status EXIT_FAILURE
 * Return: FAILURE
 */
void usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);

}

/**
 * open_error - prints an open file error message
 * If, for any reason, it’s not possible to open the file, 
 * print the error message Error: Can't open file <file>, 
 * followed by a new line, and exit with the status EXIT_FAILURE
 * @file: file
 * Return: FAILURE
 */
void open_error(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
	exit(EXIT_FAILURE);

}

/**
 * push_error - handles a push error
 * @fd: file desciptor
 * @line: buffer
 * @stack:  stack or queue
 * @line_number: line number of the command
 */
void push_error(FILE *fd, char *line, stack_t *stack, int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	fclose(fd);
	free(line);
	/*_free(stack);*/
	exit(EXIT_FAILURE);
}

/**
 * instr_error - Error handler for unknown instructions
 * If the file contains an invalid instruction, print the 
 * error message L<line_number>: unknown instruction <opcode>, 
 * followed by a new line, and exit with the status EXIT_FAILURE
 * @fd: file descriptor
 * @line: buffer
 * @stack:  stack or queue
 * @line_n: line number of the command
 * @val: instruction
 */
void instr_error(FILE *fd, char *line, stack_t *stack, char *val, int line_n)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_n, val);
	fclose(fd);
	free(line);
	/*_free(stack);*/
	exit(EXIT_FAILURE);
}
