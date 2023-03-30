#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character c to stdout @c: character to print 
 *
 * return (1) on success 1,
 * 	      on error: -1, is returned and errno is set appropriately    */

int _putchar(char c)
{
	return (write(1,&c,1));
}