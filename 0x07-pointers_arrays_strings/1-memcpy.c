#include "main.h"
#include <stdio.h>

/**
 * _memcpy -copies n bytes from memory area src to memory area dest
 * @n: number of bytes.
 * @src: the source of memory.
 * @dest: the destenation of memory.
 * Return: (dest) the destenation.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int un;

	for (un = 0; un < n; un++)
	{
		dest[un] = src[un];
	}
	return (dest);
}
