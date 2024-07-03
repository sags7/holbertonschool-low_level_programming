#include <stdio.h>
#include <stdlib.h>
/**
 * main- prints the minimum number of coins required to change the input cents.
 * available coins are 25, 10, 5, 2 and 1 cent coins
 * @argsc: amount of arguments
 * @argsv: arguments vector
 * Return: 1 if passed more than one argument, 0 if successful
 */
int main(int argsc, char **argsv)
{
	int minCoins = 0, cents = atoi(argsv[1]);

	if (argsc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	while (cents >= 25)
	{
		minCoins++;
		cents -= 25;
	}
	while (cents >= 10)
	{
		minCoins++;
		cents -= 10;
	}
	while (cents >= 5)
	{
		minCoins++;
		cents -= 5;
	}
	while (cents >= 2)
	{
		minCoins++;
		cents -= 2;
	}
	while (cents >= 1)
	{
		minCoins++;
		cents -= 1;
	}
	printf("%d\n", minCoins);
	return (0);
}
