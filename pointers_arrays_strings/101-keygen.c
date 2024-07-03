#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * randLimits- returns a random value bewtween two ints
 * @min: lower limit
 * @max: upper limit
 * Return: randomly generated int
 */
int randLimits(int min, int max)
{
	return (min + rand() % (max - min + 1));
}
/**
 * main- prints out a randomly generated password
 * in which all chars' ascii values add up to a
 * specific target value
 * Return: always 0
 */
int main(void)
{
	int x = 0, minChar = 33, maxChar = 125, targetValue = 2772, currentValue = 0;

	srand(time(NULL));

	while (currentValue < targetValue)
	{
		x = randLimits(minChar, maxChar);
		if (x + currentValue <= targetValue)
		{
			currentValue += x;
			putchar(x);
		}
		else
			break;
	}
	if (currentValue < targetValue) {
		putchar(targetValue - currentValue);
		currentValue = targetValue;
	}
	return (0);
}
