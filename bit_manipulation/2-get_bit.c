#include "main.h"
/**
 * get_bit - returns the value of a bit at index
 * @n: the bits to check
 * @index: the index of the bit to retrieve its value
 * Return: the value of the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask <<= index;
	if (mask & n)
		return (1);
	else
		return (0);
}
