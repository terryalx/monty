#include "monty.h"

/**
 * _file_error - Prints an error message for
 * a failed file open operation.
 * @file: The name of the file that failed to open.
 *
 * Description:
 * This function is called when there is an error opening a file. It prints
 * an error message indicating that the specified file could not be opened,
 * and then exits the program with a failure status.
 */
void _file_error(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n",
			file);
	FAIL;
}

