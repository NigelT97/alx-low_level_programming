#include "main.h"
/**
 * *string_toupper - change lower case to uppercase
 * @n: character to be uppercased
 * Return: upper case value
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; ++i)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
