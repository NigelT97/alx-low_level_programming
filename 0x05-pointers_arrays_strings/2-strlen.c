#include "main.h"
/**
 * _strlen - check length of string
 * @s: string pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int x, n;

	for (x = 0; x != 900; ++x)
	{
		if (s[x] != '\0')
			continue;
		else
			break;
	}
	n = x - 1;
	return (n);
}

