#include "monty.h"

/**
* monty_add_node - Adds a new node at the beginning of the stack.
* @stack: Double pointer to the top of the stack
* @n: Value to be added to the new node
* Return: Address of the new node, or NULL on failure
*/
stack_t *monty_add_node(stack_t **stack, int n)
{
stack_t *new_node;
new_node = malloc(sizeof(stack_t));
if (!new_node)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}

new_node->n = n;
new_node->prev = NULL;
new_node->next = *stack;

if (*stack)
(*stack)->prev = new_node;

*stack = new_node;
return (new_node);
}
