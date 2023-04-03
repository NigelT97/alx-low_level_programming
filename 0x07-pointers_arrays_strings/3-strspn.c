#include "main.h"
/**
 * _strspn - check section of a string
 * @s: string to be checked
 * @accept: section of string
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, x = 0, a;

	for (i = 0; s[i] != '\0'; i++)
	{
		a = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				x++;
				a++;
			}
		}
		if (a > 0)
			return (x);
	}
	return (0);
}
