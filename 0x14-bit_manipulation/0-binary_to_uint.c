#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bn, pw;
	int ln;

	if (b == NULL)
		return (0);
	for (ln = 0; b[ln]; ln++)
	{
		if (b[ln] != '0' && b[ln] != '1')
			return (0);
	}
	ln--;
	for (pw = 1, bn = 0; ln >= 0; ln--, pw *= 2)
	{
		if (b[ln] == '1')
			bn += pw;
	}
	return (bn);
}
