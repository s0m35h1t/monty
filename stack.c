#include "monty.h"

/**
 * push - add new item to top of stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * @n: value of new item
 * Return: void or -1
 */
void push(stack_t **stack, char *n, unsigned int line_number)
{
stack_t *new = NULL;
int i;

new = malloc(sizeof(stack_t));
if (new == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
if (n == NULL)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
if (n[0] != '-' || (n[0] < 48 || n[0] > 57))
{
printf("L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
for (i = 1; n[i]; i++)
{
if (n[i] < 48 || n[i] > 57)
{
printf("L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
}
new->n = atoi(n);
new->prev = NULL;
new->next = NULL;
if (*stack != NULL)
{
new->next = *stack;
(*stack)->prev = new;
}

*stack = new;
}
/**
 * swap - swaps the value of the top two elms on the stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void, exit with -1 on failure
 */
void swap(stack_t **stack, unsigned int line_number)
{
int tmp;

if (len(stack) < 2)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

tmp = (*stack)->n;
(*stack)->n = (*stack)->next->n;
(*stack)->next->n = tmp;
}


/**
 * pop - removes the top element of the stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void
 */
void pop(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
stack_t *next;

if (stack == NULL || *stack == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}
next = (*stack)->next;
free(*stack);
*stack = next;
}
