#include "monty.h"

cmd_t cmd = {NULL, NULL};

/**
 * execute - Read the file and execute the Monty bytecode.
 * @argv: The filename containing Monty bytecode.
 *
 * Description:
 * This function reads the Monty bytecode file line by line, tokenizes each
 * line, and interprets the Monty instructions. It maintains a stack to
 * execute push, pop, and other stack-related operations.
 */
void execute(char *argv)
{
	int c_line = 0, r = 0;
	size_t bufsize = 0;
	char *token = NULL, *val = NULL;
	stack_t *stack = NULL;

	cmd.fd = fopen(argv, "r");
	if (cmd.fd)
	{
		while (getline(&cmd.line, &bufsize, cmd.fd) != -1)
		{
			c_line++;
			token = strtok(cmd.line, " \n\t\r");
			if (token == NULL)
			{
				free(token);
				continue;
			}
			else if (*token == '#')
				continue;
			val = strtok(NULL, " \n\t\r");
			r = _get_(&stack, token, val, c_line);
			if (r == 1)
				push_error(cmd.fd, cmd.line, stack, c_line);
			else if (r == -1)
				_unknown_error(cmd.fd, cmd.line, stack, token, c_line);
		}
		free(cmd.line);
		_free_stack(stack);
		fclose(cmd.fd);
	}
	else
	{
		_file_error(argv);
	}
}
