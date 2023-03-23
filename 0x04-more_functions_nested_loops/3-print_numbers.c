#include "main.h"
/**
 * print_number - print from 0 to 9
 */
void print_number(void)
{
	int n;

	for (n = 0; n < 9; n++)
		_putchar(n + 48);
	_putchar('\n');
}
