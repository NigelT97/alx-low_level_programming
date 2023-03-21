#include "main.h"
/**
 * print_alphabet_x10 - print a to z ten time
 */
void print_alphabet_x10(void)
{
	int l, i;

	i = 0;
	do {
		for (l = 'a'; l <= 'z'; ++l)
			putchar(l);
		putchar('\n');
			++i;
	} while (i < 10);
}
