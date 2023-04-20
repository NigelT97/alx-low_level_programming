#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: data type
 */
void print_all(const char * const format, ...)
{
	int n;
	char *se, *sp, *str;
	va_list ls;

	va_start(ls, format);
	if (format)
	{
		n = 0;
		sp = "";
		while (format[n])
		{
			switch (format[n])
			{
				case 'i':
					printf("%s%d", sp, va_arg(ls, int));
					break;
				case 'c':
					printf("%s%d", sp, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(ls, double));
					break;
				case 's':
					str = va_arg(ls, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
			}
			sp = ", ";
			n++;
		}
	}
	printf("\n");
	va_end(ls);
}