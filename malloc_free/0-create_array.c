#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with c
 *
 * @size : size of the array
 * @c : value of the char
 *
 * Return: string of char
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int number = 0;

	if (size >= 0)
	{
		str = malloc(sizeof(char) * size);

		for (number = 0; number < size; number++)
		{
			str[number] = c;
		}
	}
	else
	{
		return (NULL);
	}

	return (str);
}
