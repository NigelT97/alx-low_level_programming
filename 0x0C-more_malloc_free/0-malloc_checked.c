#include "main.h"
/**
 * malloc_checked - check memory allocated
 * @b: bytes
 * Return: exit 98 if fails or return new memory if it passes
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
