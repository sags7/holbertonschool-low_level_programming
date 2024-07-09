#include <stdlib.h>
/**
 * free_grid- frees a 2S int arr from the alloc_grid function
 * @grid: the pointer to the 2D grid
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
