#include "main.h"
/**
 * print_line- Draws a straight line in the termianl of n length
 *
 * @n: the length of the line in _ characters
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
		_putchar(95);
}
