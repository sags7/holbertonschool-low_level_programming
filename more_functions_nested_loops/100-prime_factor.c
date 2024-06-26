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
	long int val = 612852475143, highest_fac = 0, fac;

	for (fac = 2; fac <= val ; fac++)
	{
		if (isPrime(fac) == 1 && val % fac == 0)
		{
			if (fac > highest_fac)
				highest_fac = fac;
			while (val % fac == 0)
                val /= fac;
		}
	}
	if (val > highest_fac)
        highest_fac = val;

	printf("%ld\n", highest_fac);
	return (0);
}
