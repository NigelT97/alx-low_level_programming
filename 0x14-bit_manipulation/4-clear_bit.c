#include "main.h"
/**
 * clear_bit - sets value of a bit to 0
 * @n: value
 * @index: position
 * Return: 1 success, -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int x;

	if (index > 64)
		return (-1);
	x = index;
	for (i = 1; x > 0; i *= 2, x--)
		continue;
	if ((*n >> index) & 1)
		*n -= i;
	return (1);
}
