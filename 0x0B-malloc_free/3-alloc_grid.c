#include "main.h"
/**
 * alloc_grid - 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: result required
 */
int **alloc_grid(int width, int height)
{
	int i, j, **g;

	if (height <= 0 || width <= 0)
		return (NULL);
	g = malloc(sizeof(int) * (1 + width + height));
	if (g == NULL)
		return (NULL);
	for(i = 0; i < height; i++)
	{
		for(j = 0; j < width; j++)
			g[i][j] = 0;
	}
	return (grid);
}
