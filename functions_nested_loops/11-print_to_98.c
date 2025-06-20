#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - print numbers to 98
  * @n : The start
  *
  */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
			n++;
		}
		printf("%d", n);
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	printf("\n");
}
