#include <stdio.h>

/**
 * main- program entry point
 *
 *Return: program always retruns 0
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b <= a)
				continue;
			putchar('0' + a);
			putchar('0' + b);
			if (!((a == 8) && (b == 9)))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
