#include "main.h"
/**
 * times_table- prints out the 9 multiplication table
 *
 * Return: always 0 if successful
 */

void times_table(void)
{
	int a, b, r;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			r = a * b;
			if (b != 0)
				_putchar(' ');
			if ((r / 10) < 1 && b != 0)
				_putchar(' ');
			if ((r / 10) != 0)
				_putchar('0' + (r / 10));
			_putchar('0' + (r % 10));
			if (b < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
