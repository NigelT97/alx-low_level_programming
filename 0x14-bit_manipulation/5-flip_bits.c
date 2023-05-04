#include "main.h"
/**
 * flip_bits - number of bits you would need to flip to get to another
 * @n: value
 * @m: another value
 * Return: result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int df;
	int i;

	df = n ^ m;
	for (i = 0; df; i++)
		df &= (df - 1);
	return (i);
}
