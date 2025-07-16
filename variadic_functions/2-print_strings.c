#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	char *i;
	va_list str;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(str, n);
	for (count = 1; count <= n; count++)
	{
		i = va_arg(str, char*);
		printf("%s", i);
		if (count == n)
			break;
		printf("%s", separator);
	}
	printf("\n");

}
