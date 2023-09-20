#include "monty.h"

/**
 * _get_ - Get the opcode function associated with the command.
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
		{"push", _push},
		{"pall", _pall},
		{"pint", _print_top_stack},
		{"pop", _pop},
		{"nop", _to},
		{"swap", _swap_element},
		{"add", _add_to_top},
		{"sub", _subtract_top},
		{"div", _divide_element},
		{"mul", _mult_second_top},
		{"mod", _mod_second_top},
		{"pchar", _print_top_ASCII},
		{NULL, NULL}
	};

	while (op[i].opcode)
	{
		if (!strcmp(arg, op[i].opcode))
		{
			if (!strcmp(arg, "push"))
			{
				if (_is_digit(val) == 1)
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
