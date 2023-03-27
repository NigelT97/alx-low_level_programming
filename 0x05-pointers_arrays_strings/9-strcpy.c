#include "main.h"
/**
 * *_strcpy - copies the string
 *@src: pointer
 *@dest: pointer
 *Return: returns pointer value
 */

char *_strcpy(char *dest, char *src)
{
	int i, x;

	for (x = 0; src[x] != '\0'; x++)
		continue;
	for (i = 0; i <= x; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
