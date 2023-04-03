#include "main.h"
/**
 * _strspn - check section of a string
 * @s: string to be checked
 * @accept: section of string
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				x++;
		}
	}
	return (x);
}
