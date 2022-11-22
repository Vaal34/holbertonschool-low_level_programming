#include "main.h"
#include <stdlib.h>

int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (filename == NULL)
		return (-1);

	read(fd, text_content, strlen(text_content));

	close(fd);
	return (1);
}
