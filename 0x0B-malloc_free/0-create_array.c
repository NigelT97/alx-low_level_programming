#include "main.h"
/**
 * create_array - creates an array of chars
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
	if (p == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		p[x] = c;
	return (p);
}
