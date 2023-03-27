#include "main.h"
/**
 * _puts - prints out to stdout
 * @str: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < 100000; ++i)
	{
		if (str[i] != '\0')
			putchar(str[i]);
		else
			break;
	}

	printf("\n");
}

