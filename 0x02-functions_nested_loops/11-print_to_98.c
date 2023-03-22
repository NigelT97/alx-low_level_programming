#include "main.h"
/**
 * print_to_98 - print natural numbers to 98
 * @n: number starting from
 */
void print_to_98(int n)
{
	do {
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		++n;
	} while (n <= 98);
}
