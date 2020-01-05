#include "monty.h"

instruction_t opcodes[] = {
	{"pall", pall},
	{"pint", pint},
	{"swap", swap},
	{"pop", pop},
	{"add", add},
	{"sub", sub},
	{"mul", mul},
	{"div", _div},
	{"mod", mod},
	{"pchar", pchar},
	{"pstr", pstr},
	{NULL, NULL}};
/**
 * opcode_finder - find opcode
 * @stack: stack pointer
 * @opcode: user input opcode
 * @line_number: line number
 * Return: Always 1 (Success) or stderr
 */
int opcode_finder(stack_t **stack, char *opcode, int line_number)
{
	int i;

	for (i = 0; opcodes[i].opcode; i++)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
		{
			(opcodes[i].f)(stack, line_number);
			return (EXIT_SUCCESS);
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
/**
 * main - Entry point
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: Always 0 (Success) or stderr
 */
int main(__attribute__((unused)) int argc, char const *argv[])
{
	stack_t *stack = NULL, *curr;
	FILE *fp;
	char *buffer = NULL, *opcode, *n;
	size_t buffsize = 0;
	int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(1);
	}
	while ((getline(&buffer, &buffsize, fp)) != -1)
	{
		line_number++;
		opcode = strtok(buffer, DELIM);
		if (opcode == NULL || opcode[0] == '#')
			continue;
		if (!strcmp(opcode, "nop"))
			continue;
		else if (!strcmp(opcode, "push"))
		{
			n = strtok(NULL, DELIM);
			push(&stack, n, line_number);
		}
		else
			opcode_finder(&stack, opcode, line_number);
	}
	fclose(fp);
	free(buffer);
	while (stack != NULL)
	{
		curr = stack;
		stack = stack->next;
		free(curr);
	}
	return (0);
}
