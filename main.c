#include "monty.h"

/**
 * main - Entry point for Monty interpreter.
 * @argc: Argument counter.
 * @argv: Argument vector containing the filename.
 *
 * Return: EXIT_SUCCESS if successful, EXIT_FAILURE on failure.
 */
int main(int argc, char **argv)
{
	int value = 2;

	if (argc != value)
	{
		/**
		 * _usage_error - Print usage error message.
		 */
		_print_usage_error();
	}
	else
	{
		/**
		 * execute - Read the Monty bytecode file and execute the commands.
		 * @argv: The filename containing Monty bytecode.
		 *
		 * Return: EXIT_SUCCESS if successful, EXIT_FAILURE on failure.
		 */
		_tokenizer(argv[1]);
	}

	return (EXIT_SUCCESS);
}
