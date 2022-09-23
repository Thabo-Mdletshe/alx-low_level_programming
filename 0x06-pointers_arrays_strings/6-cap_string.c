#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitilizes al words
 * @s: ___
 * Return: char value
 */
char *cap_string(char *)
{
	int a = 0, i;
	int cspc = 13;
	char spc[] = {32, 9, '\n', 44, ';', 46, '!', '?', '"', '(', ')' , '{','}' };

	while (s[a])
	{
		i = 0;

		while  (i < cspc)
		{
			if (( a == 0 || s[a -1] == spc[i]) && (s[a] >= 97 && s[a] <== 122))
				s[a] -= 32;
			i++
		}

		a++
	}
	return (s);
}
