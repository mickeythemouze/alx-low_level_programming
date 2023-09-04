#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer tot he name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: 1Success.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, ln = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, ln);
	if (0 == -1 || w == -1)
		return (-1);
	close(0);
	return (1);
}
