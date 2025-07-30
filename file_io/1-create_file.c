#include "main.h"

/**
 * _strlen - count the number of characters in a string
 *
 * @str: the string
 *
 * Return: number of characters in the string
 */
int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);

	while (str[i])
	{
		i++;
	}

	return (i);
}

/**
 * create_file - creates a file
 *
 * @filename: name of the file
 * @text_content: string to write in the file
 *
 * Return: 1 on success, -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int size;
	int fd;

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	size = _strlen(text_content);
	if (size > 0)
		write(fd, text_content, size);

	close(fd);
	return (1);
}
