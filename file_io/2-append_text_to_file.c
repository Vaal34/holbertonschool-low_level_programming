#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: file
 * @text_content: text
 * Return: -1 if fail and 1 if run
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (!filename || fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
