#include "main.h"
/**
 * string_count - count array count
 * @s: string
 * Return: count
 */
int string_count(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		continue;
	return (n);
}
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: joint string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, n, m;
	char *str;

	i = string_count(s1);
	j = string_count(s2);
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	for (n = 0; s1[n] != '\0'; n++)
		str[n] = s1[n];
	for (m = 0; s2[m] != '\0'; m++, n++)
		str[n] = s2[m];
	str[n] = '\0';
	return (str);
}
