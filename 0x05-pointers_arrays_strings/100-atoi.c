#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (* s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
