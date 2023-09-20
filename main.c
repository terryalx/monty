#include "monty.h"

/**
 * main - Entry point for Monty interpreter.
 * @argc: Argument counter.
 * @argv: Argument vector containing the filename.
 * Return: EXIT_SUCCESS if successful, EXIT_FAILURE on failure.
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		/**
		 * _usage_error - Print usage error message.
		 */
		_usage_error();
	}
	else
	{
		/**
		 * execute - Read the Monty bytecode file and execute the commands.
		 * @argv: The filename containing Monty bytecode.
		 */
		execute(argv[1]);
	}

	return (EXIT_SUCCESS);
}
