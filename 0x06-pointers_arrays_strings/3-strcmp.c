#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: difference value
 */
int _strcmp(char *s1, char *s2)
{
	int diff, i;

	for (i = 0; s1[i] != '\0'; ++i)
	{
		if (s1[i] == s2[i])
			diff = s1 - s2;
		else
		{
			diff = s1[i] - s2[i];
			break;
		}
	}
	return (diff);
}
