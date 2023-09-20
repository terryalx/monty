#ifndef _MONTY_H_
#define _MONTY_H_
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>
#define _GNU_SOURCE

extern int value;

/**
 * struct stack_s - doubly linked list [stack]
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* error messages */
void usage_error(void);
void open_error(char *file);
void push_error(FILE *fd, char *line, stack_t *stack, int line_number);
void instr_error(FILE *fd, char *line, stack_t *stack, char *val, int line_n);

/* functions */
char **tokenizer(char *buffer);
void _free(stack_t **stack);
void clean_stack(stack_t **stack);
void pop(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
stack_t *createNode(int n);

#endif /* MONTY */
