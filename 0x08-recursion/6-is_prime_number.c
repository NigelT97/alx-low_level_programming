#include "main.h"
/**
 * primenum - actual prime calculator
 * @n: to be checked
 * @x: range
 * Return: result
 */
int primenum(int n, int x)
{
	if (x % n == 0)
		return (0);
	else if (x == 2)
		return (1);
	else
		return (primenum(n, x - 1));
}
/**
 * is_prime_number - checks if number is a prime
 * @n: number to be chjecked
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int y;

	if (n <= 1)
		return (0);
	y = primenum(n, n - 1);

	if (y == 0)
		return (0);
	else
		return (1);
}
