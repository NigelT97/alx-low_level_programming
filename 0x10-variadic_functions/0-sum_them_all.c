#include "variadic_functions.h"
/**
 * sum_them_all - adds all parameters
 * @n: parameters
 * Return: sum result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i, m = 0;

	if (n == 0)
		return (0);
	va_start(x, n);
	for (i = 0; i < n; i++)
		m += va_arg(x, int);
	va_end(x);
	return (m);
}
