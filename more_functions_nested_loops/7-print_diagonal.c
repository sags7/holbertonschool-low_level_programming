#include "main.h"
/**
 * print_diagonal- prints a diagonal line across the screen of n length
 *
 * @n: the length of the diagonal in \ characters
 */
void print_diagonal(int n)
{
	int i = 0, l = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		l = i;
		while (l > 0)
		{
			_putchar(32);
			l--;
		}
		_putchar(92);
		_putchar('\n');
	}
}
