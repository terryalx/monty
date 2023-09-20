#include "monty.h"

/**
 * main - entry point for the program
 * @argc: argument counter
 * @argv: entry argument vector
 * Return: success || failure || message
 */

int main(int argc, char **argv)
{
	char **tokens = NULL;
	stack_t *head = NULL;
	char *buffer = NULL;
	FILE *fp;
	size_t n;
	unsigned int line_number;
	
	line_number = 0;

	switch (argc)
	{
		case 2:
			/* read the file and execute */
			/*execute(argv[1]);*/
			break;
		default:
			/* print usage error */
			usage_error();
			break;
	}
	while ((getline(&buffer, &n, fp)) != -1)
	{
		line_number++;
		tokens = tokenizer(buffer);
		if (tokens)
		{
			free(tokens);
		}
	}
	free(buffer);
	/*clean_stack(&head);*/
	fclose(fp);

	return (EXIT_SUCCESS);
}

