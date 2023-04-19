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
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(11);
	}
	x = atoi(argv[1]);
	op = argv[2];
	y = atoi(argv[3]);
	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(12);
	}
	if (y == 0 && *op == 47 || *op == 37)
	{
		printf("Error\n");
		exit(13);
	}
	printf("%d\n", get_op_func(op)(x, y));
	return (0);
}
