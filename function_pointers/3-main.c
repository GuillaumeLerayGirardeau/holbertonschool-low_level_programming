#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - start of the function
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	int a;
	int b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (b == 0 && (operation == op_div || operation == op_mod))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operation(a, b));

	return (0);
}
