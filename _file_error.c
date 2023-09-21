#include "monty.h"

/**
 * _file_error - Prints an error message for a failed file open operation.
 * @file: The name of the file that failed to open.
 * 
 * If, for any reason, it’s not possible to open the file, 
 * print the error message Error: Can't open file <file>, 
 * followed by a new line, and exit with the status EXIT_FAILURE
 * where <file> is the name of the file
 *
 * Description:
 * This function is called when there is an error opening a file. It prints
 * an error message indicating that the specified file could not be opened,
 * and then exits the program with a failure status.
 */
void _file_error(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
	FAIL;
}
