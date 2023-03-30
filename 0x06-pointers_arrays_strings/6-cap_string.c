#include "main.h"
/**
 * *cap_string - capitalize words
 * @x: string
 * Return: the capitalized string
 */
char *cap_string(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; ++i)
	{
		if (x[i - 1] == 32 || x[i - 1] == 9 || x[i - 1] == 10 ||
				x[i - 1] == 44 || x[i - 1] == 59 || x[i - 1] == 46 ||
				x[i - 1] == 33 || x[i - 1] == 63 || x[i - 1] == 34 ||
				x[i - 1] == 40 || x[i - 1] == 41 || x[i - 1] == 123 ||
				x[i - 1] == 124)
			x[i] = x[i] - 32;
		else if ((x[0] >= 97 && x[0] <= 122))
			x[0] = x[0] - 32;
		else
			x[i] = x[i];
	}
	return (x);
}
