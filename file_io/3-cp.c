#include "main.h"

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
	int fd_from, fd_to;
	ssize_t check;
	ssize_t true_number = 0;
	char *file_copy[1024];
	mode_t old_umask;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Can't read from file %s\n", argv[1]);
		exit(98);
	}

	true_number = read(fd_from, file_copy, 1024);
	if (true_number == -1)
	{
		dprintf(2, "Can't read from file %s\n", argv[1]);
		exit(98);
	}

	check = close(fd_from);
	if (check == -1)
	{
		dprintf(2, "Can't close fd %i\n", fd_from);
		exit(100);
	}

	old_umask = umask(0);
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	umask(old_umask);
	if (fd_to == -1)
	{
		dprintf(2, "Can't write to %s\n", argv[2]);
		exit(99);
	}

	check = write(fd_to, file_copy, true_number);
	if (check == -1 || check != true_number)
	{
		dprintf(2, "Can't write to %s\n", argv[2]);
		exit(99);
	}

	check = close(fd_to);
	if (check == -1)
	{
		dprintf(2, "Can't close fd %i\n", fd_to);
		exit(100);
	}
	return (0);
}
