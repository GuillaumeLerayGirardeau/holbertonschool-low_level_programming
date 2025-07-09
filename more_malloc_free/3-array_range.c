#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min : min value of the array
 * @max : max value of the array
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i = 0;
	int size = 0;
	int *array = 0;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
