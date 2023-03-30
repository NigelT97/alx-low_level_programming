#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: count
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
		{
			dest[i] = '\0'
			break;
		}
	}

	return (dest);
}
