#include "monty.h"
#include <ctype.h>
/**
* monty_push - Pushes an element to the stack.
* @stack: Double pointer to the top of the stack
* @line_number: The current line number in the file
*/
void monty_push(stack_t **stack, unsigned int line_number)
{
char *arg;
int num;

arg = strtok(NULL, " \t\n");
if (!arg || !isdigit(*arg))
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}

num = atoi(arg);
monty_add_node(stack, num);
}
