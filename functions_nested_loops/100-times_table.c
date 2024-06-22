#include "main.h"
#include <stdio.h>
/**
 * print_times_table- prints the multiplication table from 0 to n
 *
 * @n: the the size of the multiplication table
 * Return: always returns 0 if successful
 */
void print_times_table(int n)
{
	int col, row, res;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			res = row * col;
			printf("res%dmod%d", res, (res % 1));
			if (col != 0)
			{
				if (res / 1000 == 0)
					_putchar(' ');
				else
					_putchar('0' + (res % 1000));

				if (res / 100 == 0)
					_putchar(' ');
				else
					_putchar('0' + (res % 100));

				if (res / 10 == 0)
					_putchar(' ');
				else
					_putchar('0' + (res % 10));

				if (res / 1 == 0)
					_putchar(' ');
				else
					_putchar('0' + (res % 1));
			}
			else
				_putchar('0');
			if(col != n)
				_putchar(',');
		}
		_putchar('\n');
	}
	return;
}
