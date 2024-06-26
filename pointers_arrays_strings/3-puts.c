#include "main.h"
/**
 * _puts- prints a string followed by a new line to stdout
 * @str: the starting memory location of the string
 */
void _puts(char *str)
{
	int i = 0;

	while (1)
	{
		if (*(str + i) == '\0')
		{
			_putchar('\n');
			return;
		}
		else
		{
			_putchar(*(str + i));
			i++;
		}
	}
}
