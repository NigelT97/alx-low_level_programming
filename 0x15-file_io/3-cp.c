#include "main.h"
/**
 * buffer_maker - allocates bytes
 * @fl: file
 * Return: pointer
 */
char *buffer_maker(char *fl)
{
	char *b;

	b = malloc(sizeof(char) * 1024);
	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fl);
		exit(99);
	}
	return (b);
}
/**
 * terminate_file - close file
 * @fli: file
 */
void terminate_file(int fli)
{
	int x;

	x = close(fli);

	if (-1 == x)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fli);
		exit(100);
	}
}
/**
 * main - copies content of one file to another
 * @argc: number of arguments
 * @argv: array
 * Return: 0 as success
 */
int main(int argc, char *argv[])
{
	int frm, to, rd, wr;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	b = buffer_maker(argv[2]);
	frm = open(argv[1], O_RDONLY);
	rd = read(frm, b, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (frm == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(b);
			exit(98);
		}
		wr = write(to, b, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}
		rd = read(frm, b, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(b);
	terminate_file(to);
	terminate_file(frm);
	return (0);
}
