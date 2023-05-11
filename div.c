#include "monty.h"

/**
 * division - divides the second top element of the stack by the top element of the stack.
 * @stack: double pointer to the beginning of the stack
 * @line_number: current line number of the Monty bytecodes file
 *
 * Return: nothing
 */
void division(stack_t **stack, unsigned int line_number)
{
	int div;

	if (stack == NULL || (*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	div = ((*stack)->next)->n / (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
	(*stack)->n = div;
}
