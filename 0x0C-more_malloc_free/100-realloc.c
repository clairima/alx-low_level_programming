#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated.
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: the new size, in bytes of the new memory block.
 * return : Return: pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr); /* if new and old size is equal, do nothing and return ptr */

	if (ptr == NULL) /* if ptr is NULL, equivalent to malloc(new_size) */
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == 0) /* if new size is 0, equivalent to free(ptr) */
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size); /* allocate new memory block */

	if (new_ptr == NULL)
		return (NULL);

	old_ptr = ptr;

	for (i = 0; i < old_size && i < new_size; i++) /*copy contents to new block */
		new_ptr[i] = old_ptr[i];
	free(ptr); /* free old block */

	return (new_ptr);
}
