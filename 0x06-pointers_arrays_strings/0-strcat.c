#include "main.h"
/**
 * *_strcat - join two strings together
 * @dest: first string
 * @src: second char
 * Return: joint string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
		continue;

	for (j = 0; src[j] != '\0'; ++j)
	{
		dest[i] = src[j];
	       ++i;
	}
return (dest);
}
