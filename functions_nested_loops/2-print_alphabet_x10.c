#include "main.h"
#ifndef ALPHABET_X10_H
#define ALPHABET_X10_H

/**
 * print_alphabet_x10- prints the alphabet 10x in lowercase follwed
 * by a new line
 */

void print_alphabet_x10(void)
{
	char x;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');
	}
}

#endif
