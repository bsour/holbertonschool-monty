#include "monty.h"

/**
 * sub - subtracts the top element of the stack from the second top element
 * @stack: double pointer to the beginning of the stack
 * @line_number: current line number of the Monty bytecodes file
 *
 * Return: nothing
 */
void sub(stack_t **stack, unsigned int line_number)
{
	int sub;

	if (stack == NULL || (*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sub = ((*stack)->next)->n - (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
	(*stack)->n = sub;
}
