#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file.txt
 * @letters: the lenght of the text
 * Return:  the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t size;

	fd = open(filename, O_RDONLY);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	size = read(fd, buffer, letters);

	close(fd);
	return (write(1, buffer, size));
}
