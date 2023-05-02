#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to a pointer to the head node of the list
 *
 * Return: Pointer to the new head node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
