#include "monty.h"

/**
* monty_rotr - Rotates the stack to the bottom.
* The last element of the stack becomes the top one.
*
* @stack: Double pointer to the top of the stack
* @line_number: The current line number in the file
*/
void monty_rotr(stack_t **stack, unsigned int line_number)
{
stack_t *first;
stack_t *last;

first = *stack;
last = NULL;
last = *stack;

if (*stack != NULL)
{
while (*stack && (*stack)->next)
*stack = (*stack)->next;
if (first && last && first != last)
{
(*stack)->prev->next = NULL;
(*stack)->prev = NULL;
last->next = first;
first->prev = last;
*stack = last;
}
}
(void)line_number;
}
