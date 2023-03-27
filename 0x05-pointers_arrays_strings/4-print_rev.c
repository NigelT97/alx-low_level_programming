#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: pointer
 */
void print_rev(char *s)
{
	int i, x;

	for (x = 0; x > -1; ++x)
	{
		if (x != '\0')
			continue;
		else
			break;
	}
	for (i = x; i > -1; --i)
		putchar(s[i]);
	putchar('\n');
}
