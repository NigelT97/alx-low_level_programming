#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: pointer
 */
void print_rev(char *s)
{
	int i, x, n;

	for (x = 0; x > -1; x++)
	{
		if (s[x] != '\0')
			continue;
		else
		{
			n = x;
			break;
		}
	}
	for (i = n - 1; i > -1; i--)
		putchar(s[i]);
	putchar('\n');
}
