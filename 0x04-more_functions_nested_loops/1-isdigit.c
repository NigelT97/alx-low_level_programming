#include "main.h"
/**
 * _isdigit - checks from 0 to 9
 * @c: variable to be checked
 * Return: 1 if true and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
