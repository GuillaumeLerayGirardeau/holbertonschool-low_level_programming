#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int line = 0;
	int column = 0;
	int time = 0;
	unsigned int total = 0;

	while (time < size)
	{
		total += *(a + line * size + column);
		time++;
		line++;
		column++;
	}

	printf("%d\n", total);
}
