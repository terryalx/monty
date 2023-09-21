#ifndef _MONTY_H_
#define _MONTY_H_

#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>


/**
 * struct cmd_s - command_info
 * @file_descriptor: file descriptor
 * @command_line: line command
 */
typedef struct cmd_s {
    FILE *file_descriptor;
    char *command_line;
} cmd_t;

extern cmd_t command_info;


/* extern */
extern int numeric_value;
extern int value;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* error */
void _file_error(char *file);
void _push_error(FILE *fd, char *line, stack_t *stack, int line_number);
void _print_usage_error(void);
void _unknown_error(FILE *fd, char *line, stack_t *stack, char *val, int line_number);


/* functions */
void _add_to_top(stack_t **stack, unsigned int line_number);
void _free_stack(stack_t *stack);
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);


void _tokenizer(char *argv);
int _get_(stack_t **stack, char *arg, char *val, int line_number);

void _print_top_stack(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void _swap_element(stack_t **stack, unsigned int line_number);
void _subtract_top(stack_t **stack, unsigned int line_number);
void _print_top_ASCII(stack_t **stack, unsigned int line_number);
void _divide_element(stack_t **stack, unsigned int line_number);
void _mult_second_top(stack_t **stack, unsigned int line_number);
void _mod_second_top(stack_t **stack, unsigned int line_number);
void _free_all_node(stack_t **stack);
int _is_digit(char *c);
stack_t *createNode(int n);
void _pstr(stack_t **stack, unsigned int n);
void _rotl(stack_t **stack, unsigned int n);
void _rotr(stack_t **stack, unsigned int n);
#endif /* _MONTY_H_ */
