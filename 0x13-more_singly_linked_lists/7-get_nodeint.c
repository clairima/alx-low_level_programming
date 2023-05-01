#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: a pointer to the head of the list.
 * @index: the index of the node, starting at 0
 * return : NULL if the node does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL && i < index; i++)
	current = current->next;

	return ((current == NULL || i < index) ? NULL : current);
}
