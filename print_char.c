#include "monty.h"

/**
* monty_pchar - Prints the ASCII value of the top element of the stack.
* @stack: Double pointer to the top of the stack
* @line_number: The current line number in the file
*/
void monty_pchar(stack_t **stack, unsigned int line_number)
{
int value;
if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
value = (*stack)->n;
if (value < 0 || value > 127)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
exit(EXIT_FAILURE);
}

printf("%c\n", value);
}
