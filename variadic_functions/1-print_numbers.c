#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	int i;
	va_list number;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(number, n);
	for (count = 1; count <= n; count++)
	{
		i = va_arg(number, int);
		printf("%d", i);
		if (count == n)
			break;
		printf("%s", separator);
	}
	printf("\n");
}
