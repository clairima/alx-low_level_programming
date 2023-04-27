#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to pointer to the first element of the list
 * @str: string to be added to the new element
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * _strlen - returns the length of a string
 * @str: the string to be checked
 *
 * Return: the length of the string
 */
size_t _strlen(const char *str)
{
	size_t i;

	for (i = 0; str[i] != '\0'; i++)
	;
	return (i);
}
