#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not present
 */
int jump_search(int *array, size_t size, int value)
{
	int step;
	size_t prev;
	size_t current;
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	step = sqrt(size);
	prev = 0;
	while (array[prev] < value)
	{
		current = prev + step;
		if (current >= size)
		{
			current = size - 1;
		}
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[current] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev, current);
			break;
		}
		prev += step;
		if (prev >= size)
		{
			return (-1);
		}
	}
	for (i = prev; i >= 0 && array[i] >= value; --i)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
