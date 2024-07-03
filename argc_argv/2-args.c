#include <stdio.h>
/**
 * main- program entry point
 * @argsc: the amount of arguments passed to the program
 * @argsv: an array with the names of the arguments
 * Return: always 0 if successful
 */
int main(int argsc, char *argsv[])
{
	int i;

	for (i = 0; i < argsc; i++)
		printf("%s\n", *(argsv + i));
	return (0);
}
