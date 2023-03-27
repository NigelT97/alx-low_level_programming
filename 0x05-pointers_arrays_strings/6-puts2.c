#include "main.h"
/**
 * puts2 - exchange print
 * @str: pointer
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i > -1; i = i + 2)
		if (str[i] != '\0')
			_putchar(str[i]);
		else
			i = -9;
	putchar('\n');
}
