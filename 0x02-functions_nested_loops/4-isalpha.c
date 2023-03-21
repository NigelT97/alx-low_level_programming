#include "main.h"
/**
 * _isalpha - checks whether upper or lower case
 * @c: variables to be checked
 * Return: 1 if condition is true
 */
int _isalpha(int c)
{
	if (islower(c) || isalpha(c))
		return (1);
	return (0);
}
