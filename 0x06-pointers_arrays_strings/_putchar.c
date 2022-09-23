#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: The character to print
 *
 * Return: 1 (success)
 * if error: return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
