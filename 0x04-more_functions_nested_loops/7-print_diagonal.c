#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int ni, nj;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (ni = 0; ni < n; ni++)
		{
			for (nj = 0; nj < n; nj++)
			{
				if (nj == ni)
					_putchar('\\');
				else if (nj < ni)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
