#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string containing character
 * @c: character to be located
 * Return: character
 */
char *_strchr(char *s, char c)
{
	for (*s; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
