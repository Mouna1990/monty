#include "monty.h"

/**
* monty_free_stack - Frees the memory allocated for the stack.
* @stack: Pointer to the top of the stack
*/
void monty_free_stack(stack_t *stack)
{
stack_t *temp;

while (stack)
{
temp = stack;
stack = stack->next;
free(temp);
}
}
