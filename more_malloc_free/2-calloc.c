#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and set memory to zero
 *
 * @nmemb : size of the array
 * @size : size of each bytes
 *
 * Return: memory for the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	return (array);

}
