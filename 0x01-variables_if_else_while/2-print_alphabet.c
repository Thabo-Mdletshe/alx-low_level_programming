#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print lowercase alphabets
 *
 * Return: always 0
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)

		putchar(low);
		putchar('\n');

	return (0);
}
