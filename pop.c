#include "monty.h"

/**
 * pop - Removes the top element of the stack.
 * @stack: Double pointer to the head node of the stack.
 * @line_number: Line number of the opcode in the file.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *temp = *stack;

	if ((*stack)->next)
	{
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
	}
	else
	{
		*stack = NULL;
	}

	free(temp);
}
