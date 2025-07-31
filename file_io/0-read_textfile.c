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
	size_t printed;
	ssize_t check = 0;
	char *str;

	if (filename == NULL)
		return (0);

	str = malloc(letters);
	if (str == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(str);
		return (0);
	}

	check = read(fd, str, letters);
	if (check == -1)
	{
		free(str);
		close(fd);
		return (0);
	}

	printed = check;

	if (letters > printed)
		letters = printed;

	printed = write(1, str, letters);
	if (printed != letters)
	{
		free(str);
		close(fd);
		return (0);
	}

	free(str);
	close(fd);
	return (printed);
}
