#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input integer
 *
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - returns the square root
 * @n: input integer
 * @x: squared number
 *
 * Return: square root of n
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
