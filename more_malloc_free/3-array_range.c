#include <stdlib.h>
/**
 * array_range- creates an array of integers and returns its pointer
 * @min: the first value to be included in the array
 * @max: the last value to be included in the array
 * Return: the pointer to the created array
 */
int *array_range(int min, int max)
{
	int *rv = NULL, i = 0, size = 0;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	rv = malloc(size * sizeof(int));
	if (!rv)
		return (NULL);

	for (i = 0; i < size; i++)
		rv[i] = min + i;

	return (rv);
}
