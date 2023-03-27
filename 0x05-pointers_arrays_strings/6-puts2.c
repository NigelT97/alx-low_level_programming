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
			putchar(str[i]);
		else
			break;
	putchar('\n');
}
