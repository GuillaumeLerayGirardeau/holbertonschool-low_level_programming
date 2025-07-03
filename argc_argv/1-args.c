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
	printf("%d\n", argc - 1);
	return (0);
}
