#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX STDOUT
 * @filename: text file
 * @letters: to be printed out
 * Return: count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *x;

	if (filename == NULL)
		return (0);
	x = malloc(sizeof(char) * letters);
	if (x == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	rd = read(op, x, letters);
	wr = write(STDOUT_FILENO, x, wr);
	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(x);
		return (0);
	}
	free(x);
	close(op);
	return (wr);
}
