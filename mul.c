#include "monty.h"

/**
 * mul - multiplies the second top element of the stack with the top element of the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: current line number of the Monty bytecodes file
 *
 * Return: nothing
 */
void mul(stack_t **stack, unsigned int line_number)
{
	int mul;

	if (stack == NULL || (*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	mul = ((*stack)->next)->n * (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
	(*stack)->n = mul;
}
