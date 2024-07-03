#include <stdio.h>
#include <stdlib.h>
/**
 * minCoins_rec- returns the minimum number of coins required to change
 * the input cents in terms of the provided organized list of coins
 * @cents: amount of cents
 * @coinIndex: the current coin
 * @availableCoins: the array of available coins
 * Return: the amount of coins needed in that denomination
 */
int minCoins_rec(int cents, int coinIndex, int *availableCoins)
{
	int retVal = 0;

	if (cents <= 0)
		return (0);

	while (cents >= availableCoins[coinIndex])
	{
		retVal++;
		cents -= availableCoins[coinIndex];
	}
	return (retVal + minCoins_rec(cents, ++coinIndex, availableCoins));
}
/**
 * main- prints the minimum number of coins required to change the input cents.
 * available coins are 25, 10, 5, 2 and 1 cent coins
 * @argsc: amount of arguments
 * @argsv: arguments vector
 * Return: 1 if passed more than one argument, 0 if successful
 */
int main(int argsc, char **argsv)
{
	int availableCoins[] = {25, 10, 5, 2, 1};
	int cents = 0;

	if (argsv[1])
		cents = atoi(argsv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	if (argsc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", minCoins_rec(cents, 0, availableCoins));
	return (0);
}
