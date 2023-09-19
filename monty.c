#include <stdio.h>

int main(int argc, char *argv[])
{
	/* Check count */
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n" );
		exit(EXIT_FAILURE);
	}

	return (0);
}
