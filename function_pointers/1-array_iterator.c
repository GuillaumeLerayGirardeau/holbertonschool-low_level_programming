#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array
 * @size: size of the given array
 * @action: the function to execute on the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x = 0;

	while (x < size)
	{
		action(array[x]);
		x++;
	}
}
