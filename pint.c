#include "monty.h"

/**
 * pint - Prints the value at the top of the stack, followed by a new line.
 * @stack: Double pointer to the head node of the stack.
 * @line_number: Line number of the opcode in the file.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
