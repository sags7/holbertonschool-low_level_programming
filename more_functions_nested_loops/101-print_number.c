#include "main.h"
/**
 * print_number- prints the input int using only _putchar()
 * @n: the number to print out
 */

void print_number(int n)
{
	unsigned int abs;

	if (n < 0)
	{
		abs = (unsigned int) (n * -1);
		_putchar(45);
	}
	else
		abs = (unsigned int) n;


	if (abs / 10 > 0)
		print_number(abs / 10);

	_putchar('0' + abs % 10);
}
