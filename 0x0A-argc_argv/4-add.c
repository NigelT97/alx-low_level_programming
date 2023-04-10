#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if error and 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, x = 0, flag;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]) == 0)
		{
			x += atoi(argv[i]);
			flag = 0;
		}
		else
			flag = 1;
	}
	if (flag == 1)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", x);
	return (0);
}
