#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion -computes the natural
 * square root of a number recursively
 * @n: the number to compute the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (0);
	}
	else if (n == 1)
	{
	return (1);
	}
	else
	{
	int i;

	for (i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
		{
		return (i);
		}
	}
	return (-1);
	}
}
