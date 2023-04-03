#include "main.h"
#include <stdio.h>

/**
 * _strspn -gets the length of a prefix substring.
 * @s: the string.
 * @accept: bytes.
 * Return: unsigneg int.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int in, on;

	for (in = 0; s[in] != '\0'; in++)
	{
		for (on = 0; accept[on] != s[in]; on++)
		{
			if (accept[on] == '\0')
				return (in);
		}
	}
	return (in);
}
