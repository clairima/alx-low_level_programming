#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: the string to be changed.
 * return: a pointer to the string changed.
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 36;
	index++;
	}
	return (str);
}
