#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - caclulates the sum of a and b.
 * @a: first input integer
 * @b: second input integer
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two integers (a and b).
 * @a: first input integer
 * @b: second input integer
 * Return: substract b from a.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply of a and b.
 * @a: first input integer
 * @b: second input integer
 * Return: The result to multiply a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the quotient of a and b.
 * @a: first input integer
 * @b: second input integer
 * Return: The result to divide a / b.
 */
int op_div(int a, int b)
{

	return (a / b);
}

/**
 * op_mod - a function that returns the module of a and b.
 * @a: first input integer
 * @b: second input integer
 * Return: The result to module a % b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
