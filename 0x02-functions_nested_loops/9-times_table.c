#include "main.h"
/**
 * times_table - time table creation
 */
void times_table(void)
{
	int num, product, mult;

	for (num = 0; num <= 9; ++num)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar(' ');
			product = num * mult;
			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + 48);
			_putchar((product % 10) + 48);
		}
		_putchar('\n');
	}
}
