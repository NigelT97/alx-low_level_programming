#include "main.h"
/**
 * print_binary - prints binary
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int ni;
	int i;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (ni = n, i = 0; (ni >>= 1) > 0; i++)
		continue;
	while (i >= 0)
	{
		if ((n >> i) & 1)
		{
			printf("1");
			i--;
		}
		else
		{
			printf("0");
			i--;
		}
	}
}
