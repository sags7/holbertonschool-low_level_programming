#include <stdio.h>
#include <math.h>
/**
 * isPrime- returns 1 if n is prime, 0 if not
 * @n: the number to check if its prime
 * Return: returns 1 if n is prime, 0 if not
 */
int isPrime(int n)
{
	int i;

	if (n <= 1)
		return (0);
	for (i = 2; sqrt(i) <= n; i++)
		if (n % i == 0 && i != n)
			return (0);
	return (1);
}
/**
 * main- program entry point. determines and prints the largest prime factor
 * of 612852475143 followed by an new line
 * Return: always 0
 */
int main(void)
{
	long int i, n = 612852475143;

	for(i = 2; i < sqrt(n); i++)
	{
		if(!(n % i))
		{
			n /= i;
			i = 1;
		}
	}
	printf("%ld\n", n);
	return (0);
}
