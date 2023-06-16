#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head of the list
 *
 * Description: This function frees each node of a dlistint_t list.
 * It starts at the head of the list and iterates through each node,
 * freeing them one by one. The head pointer is updated to the next
 * node until the end of the list is reached.
 */

void free_dlistint(dlistint_t *head)
{
    dlistint_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
}

