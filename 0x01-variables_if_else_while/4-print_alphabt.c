/*
 * File name: 4-print_alphabt.c
 * auth: Thabo
 */

#include<stdio.h>

/**
 * main - prints lower case alphabets
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
