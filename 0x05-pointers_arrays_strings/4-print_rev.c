#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - to print a string in reverse.
 *
 * @s: the string to be prints in revers.
 *
 * Return : void.
*/

void print_rev(char *s)
{
	int c  = 0;

	while (s[c] != '\0')
	{
	c++;
	}
	for (c -= 1; c >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');
}

