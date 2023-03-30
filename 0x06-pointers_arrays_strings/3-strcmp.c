#include "main.h"
#include <stdio.h>

/**
 * -strcmp - compares pointers to two strings.
 * @s1: a pointer to the first string to be compared.
 * @s2: apointer to the second string to be compared.
 * Return: if str1 < str2,the negative diffrence of the first characters.
 * if str1==str2, 0.
 * if str1>str2,the positive diffrence of the first characters.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
