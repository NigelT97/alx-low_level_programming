#include "main.h"
/**
 * puts2 - exchange print
 * @str: pointer
 */
void puts2(char *str)
{
	int i, x;

	for (i = 0; i > -1; i++)
		if (str[i] != '\0')
			continue;
		else
			break;
	for (x = 0; x < i; x = x + 2)
		putchar(str[i]);
	putchar('\n');
}
