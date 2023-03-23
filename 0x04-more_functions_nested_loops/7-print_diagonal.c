#include "main.h"
/**
 * print_diagonal - print diagonal seqeance
 * @n: variable
 */
void print_diagonal(int n)
{
	int sp, lk;

	if (n > 0)
		for (lk = 1; lk <= n; ++lk)
		{
			for (sp = 1; sp <= lk; ++sp)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
}
