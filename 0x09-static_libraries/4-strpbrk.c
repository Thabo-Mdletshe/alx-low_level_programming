#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointer to byte
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
		if (*s == accept[b])
		return (s);
		}
	s++;
	}

	return ('\0');
}
