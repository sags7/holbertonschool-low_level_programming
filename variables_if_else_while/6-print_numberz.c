#include <stdio.h>
/**
 * main- Main program entry point
 * Return: always returns 0;
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
