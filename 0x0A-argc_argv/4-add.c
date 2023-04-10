#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - adds positive numbers
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing arguments passed to the program
 *
 * Return: 0 if successful, 1 if an error occurred
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc < 2)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (!_isdigit(argv[i][j]))
		{
		printf("Error\n");
		return (1);
		}
	}
	sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

