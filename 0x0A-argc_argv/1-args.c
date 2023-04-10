#include <stdio.h>
/**
 * main - print the number of arguments placed
 * @argc: number of argumemnts
 * @argv: arguments array
 * Return: zero once done
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
