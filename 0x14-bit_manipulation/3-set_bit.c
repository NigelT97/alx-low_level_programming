#include "main.h"
/**
 * set_bit - sets value of a bit to 1
 * @n: value
 * @index: position
 * Return: 1 if it has worked and -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);
	for (i =  1; index > 0; index--, i *= 2)
		continue;
	*n += i;
	return (1);
}
