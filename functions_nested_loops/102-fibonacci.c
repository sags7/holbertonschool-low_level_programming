#include <stdio.h>
/**
 * main- program entry point
 *
 *  Return: always 0 if successfully executed
 */

void main(void)
{
	int i;
	long long int a = 1, b = 2, r;

	printf("%lld\n", a);
	printf("%lld\n", b);
	for (i = 0; i < 47; i++)
	{
		r = a + b;
		a = b;
		b = r;
		printf("%lld\n", r);
	}
}
