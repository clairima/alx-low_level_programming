#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer.
 * @array: pointer to the array.
 * @size: the number of elements in the array.
 * @cmp: pointer to the function to be used to compare values.
 * Return :the index of the first element
 * description : return the first element for which the cmp function
 * does not return 0,
 * or -1 if no element matches or size is <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}

	return (-1);
}
