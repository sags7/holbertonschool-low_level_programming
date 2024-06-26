#include <stdio.h>
/**
 * print_array- prints the first n elements of an array
 * @a: the starting memory address of the array
 * @n: the number of elements to prints
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);
	printf("\n");
}
