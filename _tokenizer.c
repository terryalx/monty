#include "monty.h"

cmd_t command_info = {NULL, NULL};

/**
 * _tokenizer - Read the file and execute the Monty bytecode.
 * @argv: The filename containing Monty bytecode.
 *
 * Description:
 * This function reads the Monty bytecode file line by line, tokenizes each
 * line, and interprets the Monty instructions. It maintains a stack to
 * execute push, pop, and other stack-related operations.
 */
void _tokenizer(char *argv)
{
	int c_line = 0, r = 0;
	size_t bufsize = 0;
	char *token = NULL, *val = NULL;
	stack_t *stack = NULL;

	command_info.file_descriptor = fopen(argv, "r");
	if (command_info.file_descriptor)
	{
		while (getline(&command_info.command_line, &bufsize, command_info.file_descriptor) != -1)
		{
			c_line++;
			token = strtok(command_info.command_line, " \n\t\r");
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
				_push_error(command_info.file_descriptor, command_info.command_line, stack, c_line);
			else if (r == -1)
				_unknown_error(command_info.file_descriptor, command_info.command_line, stack, token, c_line);
		}
		free(command_info.command_line);
		_free_stack(stack);
		fclose(command_info.file_descriptor);
	}
	else
	{
		_file_error(argv);
	}
}
