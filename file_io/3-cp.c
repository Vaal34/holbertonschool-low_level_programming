#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @a: value of arguments
 *Return: 0
 */

int main(int argc, char *a[])
{
	int fdsource = 0, fddest = 0, size = 1, wr = 0;
	int buffer[1024];

	if (argc != 3)
		{	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
		}
	fdsource = open(a[1], O_RDONLY);
	if (fdsource == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a[1]);
		exit(98);
	}
	fddest = open(a[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (size > 0)
	{
		size = read(fdsource, buffer, 1024); /* on copie fdsource dans le buffer */
		if (size == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", a[1]);
			exit(98);
		}
		wr = write(fddest, buffer, size);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", a[2]);
			exit(99);
		}
	}
	if (close(fdsource) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fdsource);
		exit(100);
	}
	if (close(fddest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fddest);
		exit(100);
	}
	return (0);
}
