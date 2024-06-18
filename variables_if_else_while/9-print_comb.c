#include <stdio.h>
/**
 * main- Main program entry point
 * Return: always returns 0;
*/
int main(void)
{
	int i;
	int b;

	for (i = 0; i < 10; i++)
	{
		for (b = 0; b < 10; b++)
		{
			putchar('0' + i);
			putchar('0' + b);
			putchar(',');
		}
	}

	putchar('\n');

	return (0);
}
