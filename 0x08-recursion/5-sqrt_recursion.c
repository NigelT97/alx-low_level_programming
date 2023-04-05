#include "main.h"
/**
 * finder_sqrt - actual square root calculator
 * @n: number to be found
 * @max: half of whats needed
 * Return: root
 */
int finder_sqrt(int n, int max)
{
	int x;

	for (max; max > 0; max--)
	{
		x = n % max;
		if (x == 0 && n == max * max)
			return (max);
	}
	return (-1);
}
/**
 * _odd_even - check if number is even
 * @max: number to be checked
 * Return: max
 */
int _odd_even(int max)
{
	if (max % 2 == 1)
		max += 1;
	return (max);
}
/**
 * _sqrt_recursion - finds square root of number
 * @n: number
 * Return: square root value
 */
int _sqrt_recursion(int n)
{
	int max;

	if (n > 0)
	{
		max = _odd_even(n);
		max /= 2;
		return (finder_sqrt(n, max));
	}
	else if (n < 0)
		return (-1);
	return (0);
}
