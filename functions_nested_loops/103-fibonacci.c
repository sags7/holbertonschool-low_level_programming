#include <stdio.h>
/**
 * main- program entry point
 *
 *  Return: always 0 if successfully executed
 */

int main(void)
{
	int i;

	unsigned long int a = 1, b = 2, r, sum = 2;


	for (i = 0; i < 100; i++)
	{
		r = a + b;
		a = b;
		b = r;

		if (r > 4000000)
			break;

		if (r % 2 == 0)
			sum += r;
	}

	printf("%ld\n", sum);
	return (0);
}
