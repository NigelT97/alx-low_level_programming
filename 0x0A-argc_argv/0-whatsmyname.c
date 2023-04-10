#include <stdio.h>
/**
 * main - prints out name of compiled C program
 * @argc: number of arguments
 * @argv: arguments array
 * Return: zero when done
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
