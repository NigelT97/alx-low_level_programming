#include "main.h"
/**
 * *_strstr - lacates a substring
 * @haystack: where to find substring
 * @needle: substring to be found
 * Return: beginner of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; haystack++)
	{
		for (j = 0; needle[j] != '\0'; needle++)
		{
			if (haystack[i] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
