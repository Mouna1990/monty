#include "monty.h"

/**
* monty_mod - Computes the rest of the division of
* the second top element by the top element.
* @stack: Double pointer to the top of the stack
* @line_number: The current line number in the file
*/
void monty_mod(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL || (*stack)->next == NULL || (*stack)->n == 0)
{
fprintf(stderr, "L%d: can't mod, stack too short of division by zero\n", line_number);
exit(EXIT_FAILURE);
}

(*stack)->next->n %= (*stack)->n;
monty_pop(stack, line_number); /* Pop the top element*/
}
