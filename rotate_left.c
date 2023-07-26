#include "monty.h"

/**
* monty_rotl - Rotates the stack to the top.
* The top element of the stack becomes the last one,
* and the second top element of the stack becomes the first one.
*
* @stack: Double pointer to the top of the stack
* @line_number: The current line number in the file
*/
void monty_rotl(stack_t **stack, unsigned int line_number)
{
stack_t *first;
stack_t *second;

first = *stack;
second = NULL;
if (*stack != NULL)
{
second = (*stack)->next;
while (*stack && (*stack)->next)
*stack = (*stack)->next;
if (second)
{
(*stack)->next = first;
first->prev = *stack;
first->next = NULL;
*stack = second;
}
}
(void)line_number;
}
