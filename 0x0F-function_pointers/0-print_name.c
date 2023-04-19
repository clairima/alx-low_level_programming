#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name string
 * @name: A pointer to a string representing a name
 * @f: A pointer to a function that takes a char* argument and returns void
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
