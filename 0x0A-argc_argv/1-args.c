#include <stdio.h>
/**
 * main - prints number of arguments
 * @args: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
