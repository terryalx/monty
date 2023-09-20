#include <stdio.h>
#include "monty.h"
/**
 * main - entry point for the program
 * Return: success || failure || message
 */
int main(void)
{
	char buffer[] = "push 0\n         ";

	char **tokens = tokenizer(buffer);

	int i = 0;

	while (tokens[i] != NULL)
	{
		printf("Token %d: %s\n", i, tokens[i]);
		i++;
	}

	free(tokens);

	return (0);
}
