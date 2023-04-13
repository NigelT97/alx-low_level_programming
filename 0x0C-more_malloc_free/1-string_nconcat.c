#include "main.h"
/**
 * string_con - string count
 * @s: string
 * Return: length od string
 */
unsigned int string_con(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	return (i);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 * Return: NULL if it fails or string if successful.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, x, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = string_con(s1);
	j = string_con(s2);
	if (n >= j)
		n = j;
	s = malloc(sizeof(char) * (i + n + 1));
	if (s == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		s[x] = s1[x];
	for (m = 0; m < n && s2[m] != '\0'; j++)
	{
		s[x] = s2[j];
		x++;
	}
	s[x] = '\0';
	return (s);
}
