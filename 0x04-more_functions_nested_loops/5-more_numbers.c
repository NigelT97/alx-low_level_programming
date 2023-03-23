#include "main.h"
/**
 * more_numbers - 10 times from 0 to 9
 */
void more_numbers(void)
{
	int n, a;

	for (n = 0; n < 11; ++n)
	{
		a = 0;

		do {
			_putchar(a + 48);
			++a;
		} while (a < 15);

		_putchar('\n');
	}
	_putchar('\n');
}
