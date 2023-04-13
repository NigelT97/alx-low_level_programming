#include "main.h"
/**
 * array_range - creates an array
 * @min: minumum
 * @max: maximum
 * Return: outcome
 */
int *array_range(int min, int max)
{
	int i, *x;

	if (min > max)
		return (NULL);
	x = malloc(sizeof(int) * (max - min + 1));
	if (x == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		x[i] = min;
	return (x);
}
