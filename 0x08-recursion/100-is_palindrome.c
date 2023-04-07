#include "main.h"
#include <stdio.h>
#include <string.h>

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
		return (1);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - recursive helper function
 * to check if a string is a palindrome
 *
 * @s: the string to check
 * @start: the starting index of the string
 * @end: the ending index of the string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}
