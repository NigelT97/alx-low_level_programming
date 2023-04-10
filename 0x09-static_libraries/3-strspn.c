#include "main.h"
/**
 * _strspn - check section of a string
 * @s: string to be checked
 * @accept: section of string
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, x;

	while (s[i] != '\0')
	{
		j = 0;
		x = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				x++;
				break;
			}
			j++;
		}
		if (x == 0)
			break;
		i++;
	}

	return (i);
}
