#include "main.h"
/**
 * _pow_recursion - to the power function
 * @x: number to be powered
 * @y: power
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y < 0)
		return (-1);
	return (1);
}
