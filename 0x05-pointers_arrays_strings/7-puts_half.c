#include "main.h"

/**
 * put_half - prints half of a string
 * @str: input
 *
 * Return: void
 */
void put_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n')
}
