#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculate the minimum coins required from change
 * @argc: change amount
 * @argv: array of change
 * Return: 1 when error and zero when succesful
 */
int main(int argc, char *argv[])
{
	int i, j, x, y = 0;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		for (j = 0; x >= change[i]; j++)
		{
			x -= change[i];
			y++;
		}
	}
	printf("%d\n", y);
	return (0);
}
