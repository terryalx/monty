#include "monty.h"

/**
 * _usage_error - Prints a usage error message and exits with failure status.
 *
 * Description:
 * This function is called when there is a usage error, typically when the
 * program is not provided with the correct command-line arguments. It prints
 * a usage error message and exits with a failure status.
 */
void _usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
