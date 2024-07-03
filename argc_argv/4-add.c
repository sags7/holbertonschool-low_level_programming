#include <stdio.h>
#include <stdlib.h>
/**
 * main- prints the sum of the passed positive numbers
 * @argsc: argument count
 * @argsv: arguments vector
 * Return: 0 if successful, 1 if any passed argument contains non-digits
 */
int main(int argsc, char **argsv)
{
	unsigned long int sum = 0;
	int i, j;

	for (i = 1; i < argsc; i++)
	{
		for (j = 0; argsv[i][j]; j++)
		{
			if (argsv[i][j] < '0' || argsv[i][j] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(argsv[i]);
	}
	printf("%lu\n", sum);
	return (0);
}
