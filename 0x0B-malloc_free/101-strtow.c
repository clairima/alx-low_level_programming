#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments
 * of a program into a single string
 *
 * @ac: The number of arguments
 * @av: An array of strings representing the arguments
 *
 * Return: Pointer to the concatenated string,
 * or NULL if insufficient memory was available
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	len = 0;
	while (av[i][len] != '\0')
	{
		len++;
		total_len++;
	}
	total_len++;
	}

	str = malloc(sizeof(char) * (total_len + 1));

	if (str == NULL)
	return (NULL);

	for (i = 0, j = 0; i < ac; i++)
	{
	len = 0;
	while (av[i][len] != '\0')
	{
		str[j] = av[i][len];
		len++;
		j++;
	}
	str[j] = '\n';
	j++;
	}
	str[j] = '\0';

	return (str);
}

