#include "monty.h"

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
	FILE *file = fopen(filepath, "r");

	/* check for file */
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filepath);
		exit(EXIT_FAILURE);
	}

	return (0);
}
