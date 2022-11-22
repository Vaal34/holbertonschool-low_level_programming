#include "main.h"
#include <stdlib.h>

/**
 * create_file - Create a function that creates a file
 * @filename: file create
 * @text_content: text in the file
 * Return: -1 if fail and 1 if run
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!filename || fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
