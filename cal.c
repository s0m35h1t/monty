#include "monty.h"
/**
 * add - adds top two elements of stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void, exit with -1 on failure
 */
void add(stack_t **stack, unsigned int line_number)
{
int top_value, second_value;

if (len(stack) < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
top_value = (*stack)->n;
second_value = (*stack)->next->n;
pop(stack, line_number);
(*stack)->n = top_value + second_value;
}
/**
 * sub - subtracts top two elements of stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void, exit with -1 on failure
 */
void sub(stack_t **stack, unsigned int line_number)
{
int top_value, second_value;

if (len(stack) < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
top_value = (*stack)->n;
second_value = (*stack)->next->n;
pop(stack, line_number);
(*stack)->n = second_value - top_value;
}
/**
 * _div - divides top two elements of stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void, exit with -1 on failure
 */
void _div(stack_t **stack, unsigned int line_number)
{
int top_value, second_value;

if (len(stack) < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
top_value = (*stack)->n;
if (top_value == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_number);
exit(EXIT_FAILURE);
}
second_value = (*stack)->next->n;
pop(stack, line_number);
(*stack)->n = second_value / top_value;
}
/**
 * mul - computes the rest of the division of the
 * top two elements of stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void, exit with -1 on failure
 */
void mul(stack_t **stack, unsigned int line_number)
{
int top_value, second_value;

if (len(stack) < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
top_value = (*stack)->n;
second_value = (*stack)->next->n;
pop(stack, line_number);
(*stack)->n = top_value *second_value;
}
/**
 * mod - adds top two elements of stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void, exit with -1 on failure
 */
void mod(stack_t **stack, unsigned int line_number)
{
int top_value, second_value;

if (len(stack) < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
top_value = (*stack)->n;
if (top_value == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_number);
exit(EXIT_FAILURE);
}
second_value = (*stack)->next->n;
pop(stack, line_number);
(*stack)->n = second_value % top_value;
}
