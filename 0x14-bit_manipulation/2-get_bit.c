#include "main.h"
/**
 * get_bit - value of a bit at a given index
 * @n: value
 * @index: position
 * Return: result
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);
	x = n >> index;
	return (x & 1);
}
