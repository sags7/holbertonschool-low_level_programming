#include "main.h"
#ifndef ALPHABET_H
#define ALPHABET_H

/**
 * print_alphabet- prints the alphabet in lowercase follwed by a new line
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}

#endif
