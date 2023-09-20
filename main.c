#include "monty.h"

/**
 * main - entry point for the program
 * @argc: argument counter
 * @argv: entry argument vector
 * Return: success || failure || message
 */

int main(int argc, char **argv)
{
    switch (argc)
    {
        case 2:
            /* read the file and execute */
            execute(argv[1]);
            break;
        default:
            /* print usage error */
            usage_error();
            break;
    }

    return (EXIT_SUCCESS);
}
