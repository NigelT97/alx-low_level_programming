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
	g = malloc(sizeof(int) * (height));
	if (g == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		g[i] = malloc(sizeof(int) * width);
		if (g[i] == NULL)
		{
			for (i ; i >= 0; i--)
				free(g[i]);
			free(g);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}
	return (g);
}
