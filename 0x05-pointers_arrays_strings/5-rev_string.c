#include "main.h"
/**
 * rev_string - reverse string
 * @s: pointer
 */
void rev_string(char *s)
{
	int i, x, n;
	char str[10000];

	for (i = 0; i > -1; i++)
		if (s[i] != '\0')
			continue;
		else
			break;
	x = i - 1;
	for (i = x; i > -1; i--)
	{
		n = x - i;
		str[n] = s[i];
	}
	for (i = 0; i > -1; i++)
	{
		if (str[i] != '\0')
			s[i] = str[i];
		else
			break;
	}
}
