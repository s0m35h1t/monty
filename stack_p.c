#include "monty.h"

/**
 * pall - prints the value of all items on the stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void
 */
void pall(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
stack_t *curr = *stack;

if (stack == NULL || *stack == NULL)
return;

while (curr != NULL)
{
printf("%d\n", curr->n);
curr = curr->next;
}
}

/**
 * pint - prints the value of the top item on the stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void
 */
void pint(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
if (stack == NULL || *stack == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}



/**
 * pchar - prints the char at the top of the stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void
 */
void pchar(stack_t **stack, unsigned int line_number)
{

if (stack == NULL || *stack == NULL)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
exit(EXIT_FAILURE);
}

if ((*stack)->n < 0 || (*stack)->n > 127)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
exit(EXIT_FAILURE);
}
putchar((*stack)->n);
putchar('\n');
}

/**
 * pstr - prints the string starting from the top of the stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void
 */
void pstr(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
stack_t *curr;

curr = *stack;
while (curr)
{
if (curr->n <= 0 || curr->n > 127)
break;
putchar(curr->n);
curr = curr->next;
}
putchar('\n');
}
