#include "main.h"
/**
 * _pow- returns x to the power of exp
 * @x: the number to exponentiate
 * @exp: the exponent of x
 * Return: returns x to the power of exp
 */
int _pow(unsigned int x, unsigned int exp)
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
	int i = 1;
	unsigned int abs = n, pow;

	if (n < 0)
	{
		abs = -n;
		_putchar(45);
	}

	while (1)
	{
		if (abs / _pow(10, i) > 0)
			i++;
		else
			break;
	}

	for (i -= 1; i >= 0; i--)
	{
		pow = _pow(10, i);

		_putchar('0' + (abs / pow) % 10);
	}
}
