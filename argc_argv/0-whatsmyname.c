#include <stdio.h>
/**
 * main- main program entry point
 * Return: always 0 if successful
 * @argsc: the amount of arguments passed to the program
 * @argsv: an array of strings containing the args passed to the program
 */
int main(int argsc __attribute__((unused)), char **argsv)
{
	printf("%s\n", argsv[0]);
	return (0);
}
