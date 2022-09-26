#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character to check for
 * @s: string to check
 *
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
