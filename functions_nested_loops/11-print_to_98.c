#include <string.h>
#include "main.h"
/**
 * print_to_98- prints all integers between an input N and 98
 *
 * @n: the number to start the sequence from
 *
 * Return: always returns 0 when successful
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i < 10)
		{
			_putchar('0' + i);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(',');
			if (n != 98)
				_putchar(' ');
		}
	}
}
