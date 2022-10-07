#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates the memory for an array.
 * @nmemb: The number of elements.
 * @size: The byte size of each array.
 *
 * Return: pointer to be allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);

	p = s;

	for (i = 0; i < (size * nmemb); i++)
		p[i] = '\0';

	return (s);
}
