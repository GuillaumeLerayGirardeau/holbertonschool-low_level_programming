#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b : size of the memory to allocate
 *
 * Return: pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	void *a = 0;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
