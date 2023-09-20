#include "monty.h"

/**
 * get_opc - Get the opcode function associated with the command.
 * @stack: Pointer to the stack.
 * @arg: The command (opcode).
 * @val: The value (argument).
 * @line_number: The line number in the Monty bytecode file.
 *
 * Return:
 * - 0 on success.
 * - 1 if val is not a digit (for push).
 * - -1 on error (if the opcode is not recognized).
 */
int _get_(stack_t **stack, char *arg, char *val, int line_number)
{
	int i = 0;

	instruction_t op[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"nop", nop},
		{"swap", swap},
		{"add", _add_to_top},
		{"sub", sub},
		{"div", divide},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{NULL, NULL}
	};

	while (op[i].opcode)
	{
		if (!strcmp(arg, op[i].opcode))
		{
			if (!strcmp(arg, "push"))
			{
				if (_isdigit(val) == 1)
					value = atoi(val);
				else
					return (1);
			}
			op[i].f(stack, (unsigned int)line_number);
			break;
		}
		i++;
	}
	if (!op[i].opcode)
		return (-1);

	return (0);
}
