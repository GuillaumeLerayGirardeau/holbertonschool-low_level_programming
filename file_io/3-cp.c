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
	int fd;
	int check;
	int true_number;
	char *file_copy;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_copy = malloc(1024);
	if (file_copy == NULL)
		return (-1);

	true_number = read(fd, file_copy, 1024);
	if (true_number == -1 || true_number == 0)
	{
		dprintf(2, "Can't read from file %s\n", argv[1]);
		free(file_copy);
		close(fd);
		exit(98);
	}

	check = close(fd);
	if (check == -1)
	{
		dprintf(2, "Can't close fd %i\n", fd);
		exit(100);
	}

	fd = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 0664);
	if (fd == -1)
	{
		dprintf(2, "Can't read from file %s", argv[2]);
		free(file_copy);
		close(fd);
		exit(99);
	}

	check = write(fd, file_copy, true_number);
	if (check == -1 || check == 0)
	{
		dprintf(2, "Can't write to %s", argv[2]);
		free(file_copy);
		close(fd);
		exit(99);
	}

	check = close(fd);
	if (check == -1)
	{
		dprintf(2, "Can't close fd %i\n", fd);
		exit(100);
	}
	free(file_copy);
	return (0);

}
