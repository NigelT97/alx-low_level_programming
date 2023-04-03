#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string containing character
 * @c: character to be located
 * Return: character
 */
char *_strchr(char *s, char c)
{
	int i, n, j;
	char y[10000];

	for (i = 0; s[i] != '\0'; i++)
	{
		y[i] = s[i];
		continue;
	}

	for (n = 0; n < i; n++)
	{
		if (s[n] == c)
		{
			j = 0;
			for (n; n < i; n++)
			{
				s[j] = y[n];
				j++;
			}
			break;
		}
		else if (n == i - 1)
			s = '\0';
		else
			continue;
	}
	return (s);
}
