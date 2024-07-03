#include <stdio.h>
#include <stdlib.h>
/**
 * main- program prints the multiplication of two ints
 * @argsc: argument count
 * @argsv: argument vector
 * Return: return 1 if cant multiply
 */
int main(int argsc, char **argsv)
{
	if (argsc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", atoi(argsv[1]) * atoi(argsv[2]));
	return (0);
}
