#include "main.h"

/**
 * put_half - prints half of a string
 * @str: input
 *
 * Return: void
 */
void put_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
		j++;
	}

	if (j % 2 == i)
	{
		k = (j  - 1) / 2;
		k += 1;
	}
	else
	{
		k = j / 2;
	}

	for (; k < j; k++)
	{
		_putchar(str[k]);
	}

	_putchar('\n');
}
