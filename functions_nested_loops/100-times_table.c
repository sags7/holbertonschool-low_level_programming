#include "main.h"
/**
 * print_times_table- prints out the 9 multiplication table
 *
 * @n: is the size of the table n * n
 * Return: always 0 if successful
 */

void print_times_table(int n)
{
	long int row, col, r;

	if (n * n > 9999)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			r = row * col;
			if (col != 0)
			{
				if ((r / 1000) == 0)
					_putchar(' ');
				else
					_putchar('0' + (r / 1000) % 10);

				if ((r / 100) == 0)
					_putchar(' ');
				else
						_putchar('0' + (r / 100) % 10);

				if ((r / 10) == 0)
					_putchar(' ');
				else
					_putchar('0' + (r / 10) % 10);
			}

			if ((r / 1) == 0)
				_putchar('0');
			else
				_putchar('0' + (r % 10));

			if (col < n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
