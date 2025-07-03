#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * main - start of the program
  *
  * @argc : numbers of arguments
  * @argv : array of arguments
  *
  * Return: 0 if success, 1 if error
  */

int main(int argc, char *argv[])
{
	int i = 1;
	int result = 0;
	char *str;
	unsigned int j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (i < argc)
		{
			str = argv[i];

			for (j = 0; j < strlen(str); j++)
			{
				if (str[j] < '0' || str[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
			i++;
		}

		printf("%d\n", result);
		return (0);
	}
}
