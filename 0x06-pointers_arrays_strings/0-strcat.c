#include "main.h"

/**
 * _strcat - concades two strings
 * @dest: String that will append
 * @src: string to be concatenated upon
 *
 * Return:  a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[len++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
