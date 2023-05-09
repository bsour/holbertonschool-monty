#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: current line number of the Monty bytecodes file
 *
 * Return: nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	sum = (*stack)->n;
	(*stack)->next->n += sum;
	pop(stack, line_number);
}
