#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: Address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head, *hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;
		while (tortoise && hare)
		{
			if (tortoise == hare)
				return (tortoise);
			tortoise = tortoise->next;
			hare = hare->next;
		}
		}
	}
	return (NULL);
}
