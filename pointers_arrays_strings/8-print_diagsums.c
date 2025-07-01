#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of two diagonals of a square matrix
  *
  * @a : the matrix
  * @size : size of the matrix
  */

void print_diagsums(int *a, int size)
{
	int line = 0;
	int column = 0;
	unsigned int total = 0;
	unsigned int total2 = 0;

	while (column < size)
	{
		total += *(a + line * size + column);
		line++;
		column++;
	}

	line = 0;
	column -= 1;

	while (column >= 0)
	{
		total2 += *(a + line * size + column);
		line++;
		column--;
	}

	printf("%d, %d\n", total, total2);
}
