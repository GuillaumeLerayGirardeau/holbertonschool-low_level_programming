#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: function to execute to found the wanted integer
 *
 * Return: -1 if false, index of the integer otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size <= 0 || array == NULL)
		return (-1);

	while (x < size)
	{
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
		x++;
	}

	return (-1);

}
