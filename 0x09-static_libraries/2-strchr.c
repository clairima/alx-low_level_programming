#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @c: the character.
 * @s: the string.
 * Return: the pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c)
{
	int nu;

	for (nu = 0; s[nu] >= '\0'; nu++)
	{
		if (s[nu] == c)
		{
			return (s + nu);
		}
	}
	return ('\0');
}
