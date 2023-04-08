#include "main.h"

/**
 * isdigit - check if number is digit
 *
 * @c: the number to be checked
 *
 * Return: 1 for a charecter that will be a digit , 0 for else.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		return (0);
}
