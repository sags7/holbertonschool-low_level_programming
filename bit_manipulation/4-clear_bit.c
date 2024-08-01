#include "main.h"
/**
 * clear_bit - clears a bit at a specific position
 * @n: the series of bits
 * @index: the index of the bit to clear
 * Return: 1 if successful or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask <<= index;
	*n &= ~mask;

	return (1);
}
