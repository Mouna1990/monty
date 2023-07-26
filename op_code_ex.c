#include "monty.h"

/**
* monty_execute_instruction - Executes the opcode and its corresponding function.
* @stack: Double pointer to the top of the stack
* @opcode: The opcode to be executed
* @line_number: The current line number in the file
*/
void monty_execute_instruction(stack_t **stack, char *opcode, unsigned int line_number)
{
int i;
instruction_t instructions[] = {
{"push", monty_push},
{"pall", monty_pall},
{"pint", monty_pint},
{"pop", monty_pop},
{"swap", monty_swap},
{"add", monty_add},
{"nop", monty_nop},
{"sub", monty_sub},
{"div", monty_div},
{"mul", monty_mul},
{"mod", monty_mod},
{"pchar", monty_pchar},
{"pstr", monty_pstr},
{"rotl", monty_rotl},
{"rotr", monty_rotr},
{"queue", monty_queue},
{NULL, NULL}
};

for (i = 0; instructions[i].opcode; i++)
{
if (strcmp(opcode, instructions[i].opcode) == 0)
{
instructions[i].f(stack, line_number);
return;
}
}

fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
exit(EXIT_FAILURE);
}
