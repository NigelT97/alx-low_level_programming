#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two arguments
 * @argc: arguments entered
 * @argv: array of arguments
 * Return: 1 when failed and 0 when successful
 */
int main(int argc, char *argv[])
{
	int i, x = 1;

	if (argc != 3)
		return (1);

	for (i = 1; i < 3; i++)
		x *= atoi(argv[i]);
	printf("%d\n", x);
	return (0);
}
