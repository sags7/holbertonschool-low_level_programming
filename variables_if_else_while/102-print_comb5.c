#include <stdio.h>

/**
 * main- program entry point
 *
 *Return: program always retruns 0
 */

int main(void)
{
	int a, b, c, d, A, B;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					A = (a * 10) + b;
					B = (c * 10) + d;
					if (A >= B)
						continue;
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + c);
					putchar('0' + d);
					if (!(A == 98 && B == 99))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
