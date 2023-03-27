#include <stdio.h>
#include "main.h"

/**
 * main - reset_to_98
 *
 * description: function that updates the value it points to to 98.
 *
 * return 0 (success) reset to 98
*/

int main(void)
{
	int num = 402;

	printf("n= %d\n", num);
	reset_to_98(&num);
	printf("n= %d\n", num);

	return (0);
}

