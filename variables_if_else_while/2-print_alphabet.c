#include <stdio.h>
#include <string.h>
/**
 * main- Main program entry point
 * Return: always returns 0;
*/
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = strlen(alphabet); i >= 0; i--)
	{
		putchar(alphabet[strlen(alphabet) - i]);
	}

	putchar('\n');

	return (0);
}
