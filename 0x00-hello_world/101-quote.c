#include <unistd.h>
/**
 * Description: main - print text
 * Return: Always 1 success
 */
int main(void)
{
	write(2, "and that pieace of art is useful\" -Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
