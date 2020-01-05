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

new = malloc(sizeof(stack_t));
if (new == NULL)
{
printf("Error: malloc failed\n");
exit(EXIT_FAILURE);
}
if (n == NULL)
{
printf("L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
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
printf("L%d: can't swap, stack too short\n", line_number);
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
printf("L%d: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}
next = (*stack)->next;
free(*stack);
*stack = next;
}
