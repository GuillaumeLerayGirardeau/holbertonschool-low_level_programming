#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a space in memory which contains copy of str
 *
 *  @str : string to copy
 *
 * Return: new copied string
 */
char *_strdup(char *str)
{
	char *newstr;
	int size = 0;

	if (str[0] != '\0')
	{
		while (str[size] != '\0')
		{
			size++;
		}

		newstr = malloc(sizeof(char) * size);
		newstr = str;

		return (newstr);
	}
	else
	{
		return (NULL);
	}
}
