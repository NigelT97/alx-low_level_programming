#include "main.h"
/**
 * _memset - fill memory into contant byte
 * @s: pointer
 * @b: character
 * @n: value of count
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
