#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a two dimensional array
 *
 * @width : width of the array
 * @height : height of the array
 *
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **array = 0;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		array = malloc(sizeof(int) * height);

		if (array == NULL)
		{
			return (NULL);
		}

		while (i < height)
		{
			array[i] = malloc(sizeof(int) * width);
			if (array == NULL)
			{
				return (NULL);
			}
			i++;
		}

		for (i = 0; i < height; i++)
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}

		return (array);

	}
}
