#include <string.h>
#include <stdio.h>
/**
 * print_to_98- prints all integers between an input N and 98
 *
 * @n: the number to start the sequence from
 *
 * Return: always returns 0 when successful
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (n < 98)
				printf(", ");
			else
				printf("\n");
		}
	}
	else
	{for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (n > 98)
				printf(", ");
			else
				printf("\n");
		}
	}
}
