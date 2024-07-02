#include "main.h"
/**
 * print_chessboard- prints a chessboard from a pointer to an 8 row array
 * @a: the pointer to the array of 8 rows
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
