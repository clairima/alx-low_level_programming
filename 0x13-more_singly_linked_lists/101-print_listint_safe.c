#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely (handles loops)
 * @head: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (next != NULL && next <= current)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}

		current = next;
	}

	if (current == NULL)
	{
		return (count);
	}
	else
	{
		exit(98);
	}
}
