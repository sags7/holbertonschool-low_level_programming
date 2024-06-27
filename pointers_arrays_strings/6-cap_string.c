#include <stdio.h>
/**
 * cap_string- changes every first letter of a word to uppercase
 * @c: the string to be affected
 * Return: returns the converted string
 */
char *cap_string(char *c)
{
	int i, b;
	char seps[] = " \t\n,;.!?\"(){}";

	for (i = 0; *(c + i); i++)
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
			for (b = 0; *(seps + b); b++)
			{
				if (*(c + i - 1) == *(seps + b))
					*(c + i) -= 32;
			}
	}
	return (c);
}
