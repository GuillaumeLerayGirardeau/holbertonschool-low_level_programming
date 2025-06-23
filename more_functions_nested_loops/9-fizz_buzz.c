#include "main.h"
#include <stdio.h>

/**
  *main - start of the program
  *Return: 0 is success
  */

int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0)
		{
			printf("Fizz");
		}
		if (number % 5 == 0)
		{
			printf("Buzz");
		}
		if (number % 5 != 0 && number % 3 != 0)
		{
			printf("%d", number);
		}
		if (number < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
