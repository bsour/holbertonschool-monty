#include "monty.h"
/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Double pointer to the head node of the stack.
 * @line_number: Line number of the opcode in the file.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp;
}
