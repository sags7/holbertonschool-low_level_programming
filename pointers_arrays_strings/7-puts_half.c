#include "main.h"
/**
 * _strlen- returns the length of a string
 *
 * @s: the starting memory position of the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int retVal = 0;

	while (*(s + retVal) != '\0')
		retVal++;
	return (retVal);
}
/**
 * puts_half- prints half a string, followed by a new line
 * @str: the string to print half of
 */
void puts_half(char *str)
{
	int i = _strlen(str) / 2;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
