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
	int i, j, x = 0, flag;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]))
				continue;
			else
				flag = 1;
		}
		if (flag != 1)
		{
			x += atoi(argv[i]);
			flag = 0;
		}
		else
			break;
	}
	if (flag == 1)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", x);
	return (0);
}
