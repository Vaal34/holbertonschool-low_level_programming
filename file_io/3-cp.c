#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @a: value of arguments
 *Return: 0
 */

int main(int argc, char *a[])
{
	int fdsource = 0;
	int fddest = 0;
	int size = 1;
	int wr = 0;
	int buffer[1024];

	if (argc != 3)
		exit(97);

	fdsource = open(a[1], O_RDONLY);
	if (fdsource == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", a[1]);
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
		}
		wr = write(fddest, buffer, size);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", a[2]);
			exit(99);
		}
	}
	if (close(fdsource) == -1)
		exit(100);
	if (close(fddest) == -1)
	{
		exit(100);
	}
	return (0);
}
