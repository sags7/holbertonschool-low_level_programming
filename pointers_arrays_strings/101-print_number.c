#include "main.h"
/**
 * print_number- prints an int using _putchar
 * @m: the int to be printed
 */
void print_number(int m)
{
	unsigned int n, orig, mag = 1, i = 0;

	if (m < 0)
	{
		orig = n = (unsigned int) -m;
		_putchar(45);
	}
	else
		orig = n = (unsigned int) m;

	for (i = 0; (n / 10) > 0; i++)
	{
		n /= 10;
		mag *= 10;
	}

	for (; i > 0; i--)
	{
		_putchar('0' + ((orig / mag) % 10));
		mag /= 10;
	}

	_putchar('0' + (orig % 10));
}
