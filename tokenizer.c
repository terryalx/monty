#include "monty.h"
/**
 * tokenizer - tokenizes the user input to pointer.
 * @buffer: the user input
 * Return: pointer to the tokenized string.
 */
char **tokenizer(char *buffer)

{
	char *token = NULL;

	char **result_arr = malloc(sizeof(char *) * 3);

	int index = 0;

	char *delim = "\t \r\n";


	if (result_arr == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		free(buffer);
		FAIL;
	}

	token = strtok(buffer, delim);

	while (token)
	{
		result_arr[index] = token;
		token = strtok(NULL, delim);
		index++;
	}

	result_arr[index] = NULL;

	return (result_arr);

}
