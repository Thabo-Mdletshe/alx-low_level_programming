#include "main.h"

/**
 * is_prime_number - returns 1 if the input is a prime number
 * @n: input prime number
 *
 * Return: 1 if n is a prime number
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime_number(n, start));
}

/**
 * is_prime - returns 1 if input is prime
 * @n: input number
 * @start: number sto start checking from
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
