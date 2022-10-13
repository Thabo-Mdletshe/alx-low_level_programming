#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: An input string to be printed.
 * @n: number of strings
 * @...: Variable number of strings to be printed
 *
 * Return: No return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	char *str;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(num, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
