#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -searches a string for any of a set of bytes.
 * @s: the string.
 * @accept: the bytes.
 * return : the pointer to the byte in s.
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char c;

	a = 0;
	while (s[a] != '\0')
	{
		a = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				c = &s[a];
				return (c);
			}
			b++;
		}
		a++;
	}
	return (0);
}
