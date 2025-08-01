#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file to prints
 * @letters: number of characters to print
 *
 * Return: number of characters printed or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	ssize_t printed = 0;
	ssize_t true_read = 0;
	char *str;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	str = malloc(letters);
	if (str == NULL)
	{
		close(fd);
		return (0);
	}

	true_read = read(fd, str, letters);
	if (true_read == -1)
	{
		free(str);
		close(fd);
		return (0);
	}

	printed = write(1, str, true_read);
	free(str);
	close(fd);

	if (printed != true_read || printed == -1)
		return (0);

	return (printed);
}
