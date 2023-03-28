#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string.
 *
 * @str: the string to be prints.
 *
 * Return : void.
*/

void puts_half(char *str)
{
	int j = 0;
	int k;

	while (j[str] != ('\0'))
	{
	j++;
	}
	if (j % 2 == 1)
	{
	k = (j - 1) / 2;
	k += 1;
	}
	else
	{
	k = j / 2;
	}

	for (; k < j ; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
