#include "monty.h"

/**
 *open_error - prints an open file error message
 *@file: file
 * Return: FAILURE
 */
void open_error(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);

	exit(EXIT_FAILURE);

}