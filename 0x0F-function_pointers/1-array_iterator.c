#include "function_pointers.h"
/**
 * array_iterator - array function 
 * @array: array pointer
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (!action || !array)
		return;
	for (n = 0; n < size; i++)
		action(array[n]);
}
