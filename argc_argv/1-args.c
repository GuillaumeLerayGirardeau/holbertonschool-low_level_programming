#include "main.h"
#include <stdio.h>

/**
  * main - start of the program
  *
  * @argc : number of argument
  * @argv : unused array of argument
  *
  * Return: 0
  */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		i++;
	}

	printf("%d\n", i);
	return (0);
}
