#include <stdio.h>
/**
 * main- main program entry point
 * @argsc: the amount of arguments passed to the program
 * @argsv: an array containing the args passed to the program
 * Return: always 0 if successful
 */
int main(int argsc, char *argsv[] __attribute__((unused)))
{
	printf("%d\n", argsc - 1);
	return (0);
}
