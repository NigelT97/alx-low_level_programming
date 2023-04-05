#include "main.h"
/**
 * _print_rev_recursion - print in reverse
 * @s: string to be reversed
 */
void _print_rev_recursion(char *s)
{
	int i;

	if (s[i] == '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
