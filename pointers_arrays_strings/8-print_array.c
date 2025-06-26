#include "main.h"
#include <stdio.h>

/**
  * print_array - print an array
  *
  * @a : array to be printed
  * @n : number of elements to be printed
  *
  */
void print_array(int *a, int n)
{
	int print = 0;

	while (print < n)
	{
		printf("%d", a[print]);
		if (print + 1 != n)
		{
			printf(", ");
		}
		print++;
	}
	printf("\n");
}
