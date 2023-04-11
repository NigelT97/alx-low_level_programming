#include "main.h"
/**
 * main - creates an array of chars
 * @size: request of bytes required
 * @c: character
 * Return: result
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int x;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	for (x = 0; x < size; x++)
		p[x] = c;
	return (p);
}
