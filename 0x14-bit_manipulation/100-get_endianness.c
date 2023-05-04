#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 big endian, 1 little endian
 */
int get_endianness(void)
{
	int i = 1;

	if (*(char *)&i == 1)
		return (1);
	else
		return (0);
}
