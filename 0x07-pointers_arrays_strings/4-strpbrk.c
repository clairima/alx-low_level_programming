#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -searches a string for any of a set of bytes.
 * @s: the string.
 * @accept: the bytes.
 * return : the pointer to the byte in s or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;


	for (a = 0; s[a] != '\0'; a++)
	{
		for  (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
				return (s + 1);
		}
	}
	return (NULL);
}
