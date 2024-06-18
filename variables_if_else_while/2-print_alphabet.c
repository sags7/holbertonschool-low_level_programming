#include <stdio.h>
/**
 * main- Main program entry point
 * Return: always returns 0;
*/
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i <= 26; i++)
	{
		putchar(alphabet[i]);
	}

	putchar('\n');

	return (0);
}
