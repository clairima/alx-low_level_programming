#include "main.h"
#include <stdio.h>

/**
 * sqrt_helper - computes the natural square root of a number recursively
 *
 * @n: the number to compute the square root of
 * @i: the current guess for the square root
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */

int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
	return (-1);
	}
	else if (i * i == n)
	{
	return (i);
	}
	else
	{
	return (sqrt_helper(n, i + 1));
	}
}

/**
 * _sqrt_recursion - computes the natural square root of a number recursively
 *
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
	else if (n == 0 || n == 1)
	{
	return (n);
	}
	else
	{
	return (sqrt_helper(n, 1));
	}
}

