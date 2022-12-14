#include "main.h"
#include <string.h>

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

	fd = open(filename, O_RDONLY); /*open the file*/
	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters); /* malloc lenght of str */
	if (buffer == NULL)
		return (0);

	read(fd, buffer, letters); /* remlpit le buffer */

	close(fd);
	return (write(STDOUT_FILENO, buffer, strlen(buffer))); /* print the file */
}
