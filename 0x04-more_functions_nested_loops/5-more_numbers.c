#include "main.h"
/**
 * more_numbers - 10 times from 0 to 9
 */
void more_numbers(void)
{
	int n, a, m;

	for (n = 0; n <= 10; ++n)
	{
		a = 0;

		do {
			m = a;
			if (a > 9)
			{
			_putchar(1 + 48);
			m = a % 10;
			}
			_putchar(m + 48);
			a = a + 1;
		} while (a <= 14);

		_putchar('\n');
	}
}
