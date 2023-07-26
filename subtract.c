#include "monty.h"

/**
* monty_sub - Subtracts the top element of the stack from the second top element.
* @stack: Double pointer to the top of the stack
* @line_number: The current line number in the file
*/
void monty_sub(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

(*stack)->next->n -= (*stack)->n;
monty_pop(stack, line_number); /*Pop the top element*/
}
