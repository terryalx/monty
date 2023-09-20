#include "monty.h"

/**
 * _is_digit - Check if a string represents a valid integer.
 * @c: The input string.
 *
 * Return:
 * - 1 if the string represents a valid integer.
 * - 0 otherwise.
 *
 * Description:
 * This function checks if the provided string `c` represents a valid integer.
 * It returns 1 if the string is a valid integer and 0 if it is not.
 * Negative integers are also considered valid.
 */
int _is_digit(char *c)
{
	char *tmp = c;

	if (c == NULL)
		return (0);

	if (*tmp == '-')
		tmp++;

	for (; *tmp != '\0'; tmp++)
	{
		if ((*tmp < '0' || *tmp > '9'))
		{
			return (0);
		}
	}
	return (1);
}
