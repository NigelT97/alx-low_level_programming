#include "main.h"
/**
 * create_file - creates a file
 * @filename: file
 * @text_content: content
 * Return: count
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, ln;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln]; ln++)
			continue;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, ln);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
