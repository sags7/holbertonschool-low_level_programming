#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number- prints an int using _putchar
 * @m: the int to be printed
 */
void print_number(int m)
{
	unsigned int n, orig, mag = 1, i = 0;

	if (m < 0)
	{
		orig = n = (unsigned int) -m;
		_putchar(45);
	}
	else
		orig = n = (unsigned int) m;

	for (i = 0; (n / 10) > 0; i++)
	{
		n /= 10;
		mag *= 10;
	}

	for (; i > 0; i--)
	{
		_putchar('0' + ((orig / mag) % 10));
		mag /= 10;
	}

	_putchar('0' + (orig % 10));
}
/**
 * _strlen- returns the length of a string
 * @s: the string to measure
 * Return: the length of the string
 */
unsigned int _strlen(char *s)
{
	if (!s || !*s)
		return (0);
	return (_strlen(s + 1) + 1);
}
/**
 * _pow- returns x to the power of y and -1 if y < 0
 * @x: the base
 * @y: the power
 * Return: x to the power of y
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}
/**
 * strtoint- converts a string into an int
 * @str: the string to take the numbers from
 * Return: int or exits with code 98 in case of bad input
 */
int strtoint(char *str)
{
	int i = 0, rv = 0, len = _strlen(str);

	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
		rv += (str[len - 1 - i] - '0') * _pow(10, i);
	}

	return (rv);
}
/**
 * main- multiplies two numbers passed as arguments and prints the result
 * @argsc: the amount of arguments
 * @argsv: arguments vector
 * Return: always 0 if successful
 */
int main(int argsc, char **argsv)
{
	int num1 = 0, num2 = 0;

	if (argsc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = strtoint(argsv[1]);
	num2 = strtoint(argsv[2]);

	print_number(num1 * num2);
	_putchar('\n');

	return (0);
}
