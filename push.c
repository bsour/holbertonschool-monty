#include "monty.h"

/**
 * push - Pushes an element to the top of the stack.
 * @stack: Double pointer to the head node of the stack.
 * @line_number: Line number of the opcode in the file.
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	int num;

	if (!stack)
	{
		fprintf(stderr, "L%d: Stack not found\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (!isdigit(stack_token))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	num = atoi(stack_token);
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = num;
	new_node->prev = NULL;

	if (*stack)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}

	*stack = new_node;
}
