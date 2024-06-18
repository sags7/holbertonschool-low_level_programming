#include <stdio.h>
/**
 * main- Main program entry point
 * Return: always returns 0;
*/
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char alphabetM[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(alphabetM[i]);
	}

	putchar('\n');

	return (0);
}
