#include "main.h"

/**
  *_strncpy - copy a string
  *
  * @dest : destination
  * @src : source
  * @n : length
  *
  * Return: string
  *
  */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}

	for (; count < n; count++)
	{
		dest[count] = '\0';
	}

	return (dest);
}
