#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocated memory using malloc
 * @b: memory to be allocated
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = maloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
