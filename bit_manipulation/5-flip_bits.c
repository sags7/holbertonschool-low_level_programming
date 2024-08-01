#include "main.h"
/**
 * flip_bits - returns the number of bits that need
 * to be flipped in order to change a number to another
 * @n: first number to compare
 * @m: second number to compare
 * Return: the numer of different bits between the two numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	long int i = sizeof(unsigned long int) * 8 - 1;
	unsigned long int mask = 1;
	unsigned int retVal = 0;

	while (i >= 0)
	{
		if ((mask & n) ^ (mask & m))
			retVal++;
		mask <<= 1;
		i--;
	}
	return (retVal);
}
