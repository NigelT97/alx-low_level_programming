#include "main.h"
/**
 * _strlen - check length of string
 * @s: string pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int x;
	char str;

	str = *s;
	x = strlen(str);
	return (x);
}

