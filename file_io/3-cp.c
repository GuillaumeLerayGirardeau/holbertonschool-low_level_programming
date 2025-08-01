#include "main.h"

/**
 * file_copy - copy a file
 *
 * @file_from: original file
 * @file_to: copy of the file
 *
 * Return: 0 if success, or negative number if error
 */
int file_copy(char *file_from, char *file_to)
{
	int fd_from = 0, fd_to = 0, check = 0;
	char buffer[1024];
	ssize_t true_written = 0, true_number = 0;
	mode_t old_umask;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		return (1);

	true_number = read(fd_from, buffer, sizeof(buffer));
	check = close(fd_from);
	if (check == -1)
		return (fd_from);
	if (true_number == -1)
		return (1);

	fd_to = open(file_to, O_WRONLY | O_TRUNC);
	if (fd_to == -1)
	{
		old_umask = umask(0);
		fd_to = open(file_to, O_CREAT, 0664);
		umask(old_umask);

		if (fd_to == -1)
			return (2);

	}

	true_written = write(fd_to, buffer, true_number);
	if (true_written == -1 || true_written != true_number)
	{
		close(fd_to);
		return (2);
	}

	check = close(fd_to);
	if (check == -1)
		return (fd_to);

	return (0);
}

/**
 * main - start of the program
 *
 * This program copies the content of a file to another file
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success, -1 if it fails
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	result = file_copy(argv[1], argv[2]);

	if (result == 1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (result == 2)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (result == 0)
	{
		return (0);
	}
	else
	{
		dprintf(2, "Error: Can't close fd %i\n", result);
		exit(100);
	}
}
