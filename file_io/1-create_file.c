#include "main.h"
#include <stdlib.h>

int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (filename == NULL)
		return (-1);

	text_content = malloc(sizeof(char) * strlen(text_content));
	if (text_content == NULL)
		return (0);

	write(fd, text_content, strlen(text_content));

	close(fd);
	return (1);
}
