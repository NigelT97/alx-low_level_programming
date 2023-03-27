#include "main.h"

/**
 * puts_half - prints half of string
 *@str: pointer
 */

void puts_half(char *str)
{
	int x, n, i;

	for (x = 0; str[x] != '\0'; x++)
		continue;
	n = x - 1;
	for (i = (n / 2); i < n; i++)
		putchar(str[i]);
	_putchar('\n');
}
