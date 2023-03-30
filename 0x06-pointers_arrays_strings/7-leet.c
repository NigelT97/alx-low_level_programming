#include "main.h"
/**
 * *leet -  encodes a string to 1337
 * @s: string
 * Return: coded string
 */
char *leet(char *s)
{
	int x, y, z;

	char l[] = "oOlLeEaAtT";
	char n[] = "0011334477";

	for (x = 0; s[x] != '\0'; ++x)
	{
		z = 0;
		for (y = 0; l[y] != '\0'; ++y)
		{
			if (s[x] == l[y])
			{
				z = y;
				s[x] = n[z];
			}
		}
	}
	return (s);
}
