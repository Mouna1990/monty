#define _POSIX_C_SOURCE 200809L
#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>



/**
* main - Entry point for the Monty program.
* The main function reads Monty byte code from a file, interprets and executes
* the corresponding operations, and manages the stack or queue data structure
* as specified by the bytecode instructions.
*
* @argc: Number of command-line arguments.
* @argv: Array of command-line arguments where the first argument is the program name
*        and the second argument is the path to the file containing Monty byte code.
* Return: 0 on successful execution, or EXIT_FAILURE on failure.
*/
int main(int argc, char *argv[])
{
FILE *file;
char *line = NULL;
size_t len = 0;
ssize_t read;

unsigned int line_number = 0;
char *opcode;
stack_t *stack = NULL;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

file = fopen(argv[1], "r");
if (!file)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

/*Initialize the stack*/

while ((read = getline(&line, &len, file)) != -1)
{
line_number++;
opcode = strtok(line, " \t\n");
if (!opcode || opcode[0] == '#')
continue;

monty_execute_instruction(&stack, opcode, line_number);
}

free(line);
monty_free_stack(stack);
fclose(file);
return (0);
}
