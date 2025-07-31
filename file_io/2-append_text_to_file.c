#include "main.h"

/**
 * _strlen - count the number of characters in a string
 *
 * @str: the string
 *
 * Return: number of characters in the string
 */
int _strlen(const char *str)
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
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: file to write into
 * @text_content: string to add in the file
 *
 * Return: 1 on success, -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int write_check;
	int size;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	size = _strlen(text_content);
	if (size = 0)
		return (0);

	write_check = write(fd, text_content, size);
	if (write_check == -1 || write_check < size)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
