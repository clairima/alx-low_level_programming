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
	int num = 10;

	printf("Before reset: %d\n", num);
	reset_to_98(&num);
	printf("After reset: %d\n", num);

	return (0);
}

