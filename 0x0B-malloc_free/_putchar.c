#include <unistd.h>

/**
 * _putchar - writes the character  c
 * @c: The character to print
 *
 * Return: 1 (success)
 * On error, -1 returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
