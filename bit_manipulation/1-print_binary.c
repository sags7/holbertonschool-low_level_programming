#include "main.h"
/**
 * print_binary - prints the binary represetation of
 * an unsigned long int n
 * @n: the int to translate to binary
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8 - 1;
	unsigned long int mask = 1;

	mask <<= i;

	while (i > 0 && !(mask & n))
	{
		mask >>= 1;
		i--;
	}
	for (; i >= 0; i--)
	{
		if (mask & n)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
