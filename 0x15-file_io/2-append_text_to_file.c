#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: text
 * Return: result
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, ln;

	if (filename == NULL)
		return (-1);
	ln = 0;
	if (text_content != NULL)
	{
		for (; text_content[ln]; ln++)
			continue;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, ln);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
