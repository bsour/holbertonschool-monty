#include "monty.h"

/**
 * main - Entry point for the Monty bytecode interpreter.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: EXIT_SUCCESS if successful, EXIT_FAILURE otherwise.
 */
int main(int argc, char **argv)
{
	FILE *file;
	char *line = NULL;
	char *opcode = NULL;
	size_t len = 0;
	ssize_t nread;
	unsigned int line_number = 0;
	stack_t *stack = NULL;
	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((nread = getline(&line, &len, file)) != -1)
	{
		line_number++;
		opcode = strtok(line, " \n");
		if (opcode && opcode[0] != '#')
		{
			stack_token = strtok(NULL, " \n");
			execute_opcode(opcodes, opcode, &stack, line_number);
		}
	}

	free(line);
	fclose(file);
	free_stack(&stack);
	return (EXIT_SUCCESS);
}
