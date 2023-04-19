#include "3-calc.h"
/**
 * main - entrance
 * @argc: number of entries
 * @argv: array of entries
 * Return: result;
 */
int main(int argc, char *argv[])
{
	int x, y;
	char *ops;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	ops = argv[2];
	y = atoi(argv[3]);
	if (get_op_func(ops) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (y == 0 && (*ops == 47 || *ops == 37))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(ops)(x, y));
	return (0);
}
