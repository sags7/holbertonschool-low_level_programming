#include "main.h"
#include <stdio.h>
/**
 * print_number- prints an int using _putchar\
 * @n: the int to be printed
 */
void print_number(int n)
{
	int orig, mag = 1, i = 0;

	if (n < 0)
	{
		orig = -n;
		_putchar(45);
	}
	else
		orig = n;

	for (i = 0; (n / 10) > 0; i++)
	{
		n /= 10;
		mag *= 10;
	}

	for(; i > 0; i--)
	{
		_putchar('0' + ((orig / mag) % 10));
		mag /= 10;
	}

	_putchar('0' + (orig % 10));
}
