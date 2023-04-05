#include "main.h"
/**
 * factorial - calculates factorial of a number
 * @n: factorial of number
 * Return: answer
 */
int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n < 0)
		return (-1);

	return (1);
}
