#include "main.h"
/**
 * _pow- returns x to the power of exp
 * @x: the number to exponentiate
 * @exp: the exponent of x
 * Return: returns x to the power of exp
 */
unsigned int _pow(unsigned int x, unsigned int exp)
{
	unsigned int n, res;

	if (exp == 0)
		return (1);
	else if (exp == 1)
		return (x);

	res = x;

	for (n = 2; n <= exp; n++)
	{
		res *= x;
	}
	return (res);
}

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
