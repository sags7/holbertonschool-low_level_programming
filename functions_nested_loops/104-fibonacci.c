#include <stdio.h>
/**
 * main- program entry point
 *
 *  Return: always 0 if successfully executed
 */

int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, r;

	printf("%lu, ", a);
	printf("%lu, ", b);
	for (i = 0; i < 96; i++)
	{
		r = a + b;
		a = b;
		b = r;
		printf("%lu", r);
		if (i < 47)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
