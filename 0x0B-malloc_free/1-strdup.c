#include "main.h"
/**
 * _strdup - pointer to newly allocated space memory
 * @str: pointer
 * Return: newly allocated pointer
 */
char *_strdup(char *str)
{
	int i, j;
	char *x;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		continue;
	x = malloc((sizeof(char) * j) - 1);
	if (x == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		x[i] = str[i];
	return (x);
}
