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
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		putchar(letter);
		putchar('\n');

	return (0);
}
