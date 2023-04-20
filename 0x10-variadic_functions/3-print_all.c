#include "variadic_functions.h"
/**
 * selector - choose parameter type
 * @arg: parameter
 * @types: parameter type
 * @sp: separator
 */
void selector(va_list arg, char types, char *sp)
{
	char *str;

	switch (types)
	{
		case 'i':
			printf("%s%d", sp, va_arg(arg, int));
			break;
		case 'c':
			printf("%s%d", sp, va_arg(arg, int));
			break;
		case 'f':
			printf("%s%f", sp, va_arg(arg, double));
			break;
		case 's':
			str = va_arg(arg, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sp, str);
			break;
	}
}
/**
 * print_all - print anything
 * @format: data type
 */
void print_all(const char * const format, ...)
{
	int n;
	char *se, *sp;
	va_list ls;

	va_start(ls, format);
	if (format)
	{
		n = 0;
		sp = "";
		while (format[n])
		{
			selector(ls, format[n], sp);
			sp = ", ";
			n++;
		}
	}
	printf("\n");
	va_end(ls);
}
