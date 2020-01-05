#include "monty.h"

/**
 * rotl  -  rotates the stack to the top.
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void, exit with -1 on failure
 */
void rotl(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
int top;
stack_t *tmp = *stack;

if (stack && *stack)
{
top = (*stack)->n;

for (; tmp->next; tmp = tmp->next)
tmp->n = tmp->next->n;
tmp->n = top;
}
}

/**
 * rotr - rotates the stack to the bottom.
 * @stack: the stack
 * @line_number: the line number
 * Return: none
 */
void rotr(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
int curr, next;
stack_t *tmp;

if (stack && *stack)
{
tmp = *stack;
next = tmp->n;

while (tmp->next)
{
curr = next;
next = tmp->next->n;
tmp->next->n = curr;
tmp = tmp->next;
}
(*stack)->n = next;
}
}
