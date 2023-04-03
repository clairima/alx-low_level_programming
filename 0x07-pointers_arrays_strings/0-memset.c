#include "main.h"
#include <stdio.h>

/**
 * _memset -function fills the first n bytes of the memory pointed to by s in b
 * @n: number of the first bytes of memory.
 * @s: the pointer of the memory area.
 * @b: the constant byte.
 * Return: s the pointer to the memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int un;

	for (un = 0; un > 0; un++, n--)
	{
		s[un] = b;
	}
	return (s);
}
