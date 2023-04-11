#include "main.h"
/**
 * argstostr - concatenates all argumemnts
 * @ac: number of entries
 * @av: array
 * Return: result
 */
char *argstostr(int ac, char **av)
{
	int i, j, x = 0, n = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			n++;
		n++;
	}
	s = malloc(sizeof(char) * (n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, x++)
	{
		for (j = 0; av[i][j] != '\0'; j++, x++)
			s[x] = av[i][j];
		s[x] = '\n';
	}
	s[x] = '\0';
	return (s);
}
