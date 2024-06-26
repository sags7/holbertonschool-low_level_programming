#include "main.h"
/**
 * puts2- prints every other letter of a string followed by a new line to stdout
 * @str: the starting memory location of the string
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if(i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
