#include <stdio.h>
/**
 * main- Main program entry point
 * Return: always returns 0;
*/
int main(void)
{
	int i;
	char letter;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar('0' + i);
		else
		{
			if (i == 10)
				letter = 'a';
			if (i == 11)
				letter = 'b';
			if (i == 12)
				letter = 'c';
			if (i == 13)
				letter = 'd';
			if (i == 14)
				letter = 'e';
			else if (i == 15)
				letter = 'f';

			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
