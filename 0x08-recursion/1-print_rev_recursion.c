#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: a pointer to a string.
 * return : void.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	else
	{
	_print_rev_recursion(s + 1);
	putchar(*s);
	}
}
