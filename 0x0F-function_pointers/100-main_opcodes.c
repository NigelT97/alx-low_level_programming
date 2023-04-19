#include <stdio.h>
#include <stdlib.h>
/**
 * main - entrance into programmme
 * Description: prints the opcodes of its own main funtcion
 * @argc: number of entries
 * @argv: array pointer
 * Return: success zero
 */
int main(int argc, char *argv[])
{
	int i, b;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit (1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit (2);
	}
	a = (char *)main;
	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}
		printf("%02hhx ", a[i]);
	}
	return (0);
}
