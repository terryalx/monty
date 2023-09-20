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

<<<<<<< HEAD
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
/** our functions **/
char **tokenizer(char *buffer);
=======
extern int info;
>>>>>>> fdd75ab30d11d6712f63043f1ac99629928c577e

/**
 * struct cmd_s - cmd
 */
typedef struct cmd_s
{
	FILE *fd;
	char *line;
} cmd_t;

extern cmd_t cmd;

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
void pop(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
stack_t *createNode(int n);

#endif /* MONTY */
