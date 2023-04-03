#include "main.h"
/**
 * print_diagsums - print sum of diagonals
 * @a: matrice
 * @size: dimension of matrice
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, osum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		osum += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, osum);
}
