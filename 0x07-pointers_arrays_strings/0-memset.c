#include "main.h"

/**
 * _memset - fills a block of memory with a constant byte
 * @s: starting address
 * @b: value
 * @n: number of bytes
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
