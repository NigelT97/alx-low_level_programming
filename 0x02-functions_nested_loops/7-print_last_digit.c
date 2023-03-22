#include "main.h"
/**
 * print_last_digit - find last digit of a number
 * @n: number to be checked
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = (-1) * (n % 10);
		putchar(ld);
	}
	else
	{
		ld = n % 10;
		putchar(ld);
	}
	return (ld);
}
