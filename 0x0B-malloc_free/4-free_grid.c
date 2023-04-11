#include "main.h"
/**
 * free_grid - frees a two dimensional grid
 * @grid: pointer to grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (height; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
