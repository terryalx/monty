#include <stdio.h>

/**
 * main - entry point
 * @argc: argument counter
 * @argv: number of argument
 * Return: success || failure
 */

int main(int argc, char *argv[])
{
	/* Check count */
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	/* file path to open */
	char *filepath = argv[1];
	/* open file */
	FILE *filetoopen = fopen();

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

	return (0);
}
