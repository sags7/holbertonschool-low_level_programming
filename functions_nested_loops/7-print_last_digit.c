#include "main.h"
#include <stdio.h>
/**
 * print_last_digit- prints the last digit of a number and returns it
 *
 *@p: the int to remove the last digit from
 *
 *Return: returns the last digit of i
 */

int print_last_digit(int p)
{
	int x = p % 10;

	if (x < 0)
		x *= -1;
	_putchar('0' + x);
	return (x);
}
