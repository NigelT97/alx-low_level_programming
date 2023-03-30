#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverse integer array
 * @a: array of integer
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i;
	char x[10000];

	for (i = 0; i <= n; ++i)
	{
		if (i < n)
		{
			x[i] = a[n - i];
			printf("%d, ", x[i]);
		}
		else
			printf("%d", x[i]);
	}
}
