#include "main.h"
/**
 * print_square- prints a square of size size
 *
 * @size: the size of the square in # characters
 */
void print_square(int size)
{
	int x = 0, y = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
			_putchar(35);
		_putchar('\n');
	}
}
