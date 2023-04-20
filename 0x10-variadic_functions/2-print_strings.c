#include "variadic_functions.h"
/**
 * print_strings - prints strings given
 * @separator: string separator
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;
	char *se;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		se = va_arg(ls, char *);
		if (!se)
			se = "(nil)";
		if (i == 0)
			printf("%s", se);
		else if (!separator)
			printf("%s", se);
		else
			printf("%s%s", separator, se);
	}
	printf("\n");
	va_end(ls);
}
