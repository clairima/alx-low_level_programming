#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2-dimensional array of integers
 *
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: Pointer to allocated grid, or
 * NULL if insufficient memory was available
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(sizeof(int) * width);

	if (grid[i] == NULL)
	{
		for (j = 0; j < i; j++)
		free(grid[j]);
		free(grid);
		return (NULL);
	}

	for (j = 0; j < width; j++)
	grid[i][j] = 0;
	}

	return (grid);
}
