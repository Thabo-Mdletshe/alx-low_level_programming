#include "main.h"

/**
 * _memcpy - a function that copies memory
 * @dest: memory area copied to
 * @src: memory area copied from
 * @n: given number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
