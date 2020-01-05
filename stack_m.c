#include "monty.h"

/**
 * len - returns length of stack
 * @stack: pointer of stack
 * Return: unsigned int
 */
unsigned int len(stack_t **stack)
{
	stack_t *curr;
	unsigned int l = 0;

	curr = *stack;
	while (curr)
	{
		curr = curr->next;
		l++;
	}
	return (l);
}
