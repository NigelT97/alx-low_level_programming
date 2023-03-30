#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverse integer array
 * @a: array of integer
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i; b;

	for (i = 0; i < n; ++i)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
