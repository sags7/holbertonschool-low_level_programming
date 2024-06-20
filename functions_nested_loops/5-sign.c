#include "main.h"
/**
 * print_sign- prints to std output if an int is positive or negative
 *
 * @c: the int to be tested.
 *
 * Return: returns 1 if c is greater than 0
 * returns 0 if its equal to 0
 * and -1 if its less than 0
 */

int print_sign(int c)
{
	if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
