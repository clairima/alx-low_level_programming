#include "main.h"
#include <stdio.h>

int is_prime_helper(int n, int divisor);

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - recursive helper function to check if a number is prime
 *
 * @n: the number to check
 * @divisor: the current divisor being tested for primality
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_helper(int n, int divisor)
{
	if (n <= 2)
	return ((n == 2) ? 1 : 0);

	if (n % divisor == 0)
	return (0);

	if (divisor * divisor > n)
	return (1);

return (is_prime_helper(n, divisor + 1));
}
