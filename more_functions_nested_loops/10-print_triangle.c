#include "main.h"
/**
 * print_triangle- prints a triangle of size size to the terminal
 *
 * @size: the size of the triangle in # characters
 */
void print_triangle(int size)
{
	int lvl = 0, space = 0, hash = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (lvl = 1; lvl <= size; lvl++)
	{
		for (space = size - lvl; space > 0; space--)
			_putchar(32);
		for (hash = lvl; hash > 0; hash--)
			_putchar(35);
		_putchar('\n');
	}
}
