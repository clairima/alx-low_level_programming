#include <stdio.h>
#include <stdlib.h>

void print_opcodes(char *addr, int n_bytes);

int main(int argc, char *argv[])
{
	int n_bytes;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
	printf("Error\n");
	return (2);
	}

	print_opcodes((char *)main, n_bytes);

	return (0);
}

void print_opcodes(char *addr, int n_bytes)
{
	int i;

	for (i = 0; i < n_bytes; i++)
	{
	printf("%02x ", (unsigned char)addr[i]);
	}

	printf("\n");
}
