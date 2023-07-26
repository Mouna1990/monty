#include "monty.h"

/**
* monty_pall - Prints all the values on the stack, starting from the top.
* @stack: Double pointer to the top of the stack
* @line_number: The current line number in the file
*/
void monty_pall(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
temp = *stack;

while (temp)
{
printf("%d\n", temp->n);
temp = temp->next;
}
(void)line_number;
}
