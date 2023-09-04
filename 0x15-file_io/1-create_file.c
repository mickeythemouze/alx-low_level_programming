#include "main.h"

/**
 * create_file - Creates file
 * @filename: Pointer to the name of file to be created
 * @text_content: Pointer to a string to write into the file.
 * Return: 1 Success.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, ln = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC , 0600);
	w = write(fd, text_content, ln);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
