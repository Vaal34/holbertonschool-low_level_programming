#include "main.h"
#include <stdlib.h>

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename != NULL && text_content != NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

		write(fd, text_content, strlen(text_content));

		close(fd);
		return (1);
	}
	else
	{
	fd = open(filename, O_CREAT, 0200);
	}
	return (-1);
}
