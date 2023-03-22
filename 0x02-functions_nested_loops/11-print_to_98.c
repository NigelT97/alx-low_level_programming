#include "main.h"
/**
 * print_to_98 - print natural numbers to 98
 * @n: number starting from
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		do {
			printf("%d, ", n);
			n = n - 1;
		} while (n > 98);
	}
	else if (n < 98)
	{
		do {
			printf("%d, ", n);
			n = n + 1;
		} while (n < 98);
	}
	printf("98\n");
}
