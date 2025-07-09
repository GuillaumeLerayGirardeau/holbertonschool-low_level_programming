#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and set memory to zero
 *
 * @nmemb : number of elements
 * @size : size of each bytes
 *
 * Return: memory for the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		((char *)array)[i] = 0;
	}

	return (array);

}
