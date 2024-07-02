#include <stdio.h>
/**
 * print_diagsums- prints the sums of the two diagonals
 * of a square matrix of integers
 * @a: the matrix of integers
 * @size: the size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int  i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += *(a + i);
		a = a + size;
	}

	a = a - size;

	for (i = 0; i < size; i++)
	{
		diag2 += *(a + i);
		a = a - size;
	}

	printf("%d, %d\n", diag1, diag2);
}
