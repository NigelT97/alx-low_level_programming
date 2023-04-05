#include "main.h"
/**
 * root_sq - to actually find root
 * @max: maximum range
 * @n: value with possible root
 * Return: root
 */
int root_sq(int n, int max)
{
	if (n == max * max)
		return (max);
	else if (max > 1000)
	{
		max /= 2;
		return (root_sq(n, max));
	}
	else if (max > 0)
		return (root_sq(n, max - 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - find root of number
 * @n: number
 * Return: root
 */
int _sqrt_recursion(int n)
{
	int max;

	if (n % 2 == 1)
	{
		max = (n + 1) / 2;
		return (root_sq(n, max));
	}
	else if (n >= 0)
	{
		max = n / 2;
		return (root_sq(n, max));
	}
	else
		return (-1);
}

