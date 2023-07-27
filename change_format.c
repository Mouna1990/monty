#include "monty.h"

/**
* monty_queue - Sets the format of the data to a queue (FIFO).
* This means that the top of the stack will be the first element,
* and the last one added to the stack will be the last one to be removed.
*
* @stack: Double pointer to the top of the stack
* @line_number: The current line number in the file
*/
void monty_queue(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
stack_t *current;
(void)stack;
(void)line_number;

/* Reverse the linked list to change to a queue (FIFO) */
temp = NULL;
current = *stack;

while (current)
{
temp = current->next;
current->next = current->prev;
current->prev = temp;
current = temp;
}

*stack = temp ? temp->prev : NULL;
}

