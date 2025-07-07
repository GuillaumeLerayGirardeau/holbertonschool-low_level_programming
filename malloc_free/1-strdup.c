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

	if (str != NULL)
	{
		while (str[size] != '\0')
		{
			size++;
		}

		newstr = malloc(sizeof(char) * size + 1);

		if (newstr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (size = 0; str[size] != '\0'; size++)
			{
				newstr[size] = str[size];
			}

			newstr[size] = '\0';

			return (newstr);
		}
	}
	else
	{
		return (NULL);
	}
}
