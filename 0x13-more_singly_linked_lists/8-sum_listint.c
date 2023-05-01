#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - Computes the sum of all
 * the elements of a listint_t linked list.
 * @head: A pointer to the first node of the listint_t list.
 *
 * Return: The sum of all the elements of the list. 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
