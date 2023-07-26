#define _ISASCII
#include "monty.h"
#include <ctype.h>
/**
 * is_ascii - Checks if a character is an ASCII character.
 * @c: The character to check.
 * Return: 1 if it's an ASCII character, 0 otherwise.
 */
int is_ascii(int c)
{
return (c >= 0 && c <= 127);
}
/**
* monty_pstr- Prints the string starting at the top of the stack.
* @stack: Double pointer to the top of the stack
* @line_number: The current line number in the file
*/
void monty_pstr(stack_t **stack, unsigned int line_number)
{
stack_t *runner;
runner = *stack;

(void)line_number;

while (runner != NULL && runner->n != 0 && is_ascii(runner->n))
{
putchar(runner->n);
runner = runner->next;
}
putchar('\n');
}
