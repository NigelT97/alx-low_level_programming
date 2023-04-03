#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string containing character
 * @c: character to be located
 * Return: character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
