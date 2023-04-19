#include "function_pointers.h"
/**
 * int_index - search for integer
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to function
 * Return: result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (cmp && array)
	{
		for (n = 0; n < size; n++)
			if (cmp(array[n]) != 0)
				return (n);
	}
	return (-1);
}
