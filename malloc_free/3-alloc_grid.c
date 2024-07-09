#include <stdlib.h>
/**
 * alloc_grid- creates a 2 dimensional array of ints and returns a pointer
 * @width: the width of the array
 * @height: the height of the array
 * Return: the memory position of the array
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int **retVal = malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);

	if (!retVal)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(retVal + i) = malloc(width * sizeof(int));
		if (!*(retVal + i))
		{
			for (; i >= 0; i--)
				free(*(retVal + i));
			free(retVal);
			return (NULL);
		}
	}
	return (retVal);
}
