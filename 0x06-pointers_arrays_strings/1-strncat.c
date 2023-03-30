#include "main.h"
/**
 * *_strncat - join two strings based on string 2 count
 * @dest: string 1
 * @src: 2nd string
 * @n: number of bytes of second string
 * Return: joint string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
		continue;

	for (j = 0; j < n; ++j, ++i)
	{
		if (src[j] != '\0')
			dest[i] = src[j];
		else
			break;
	}

	return (dest);
}
