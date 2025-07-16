#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all the parameters of the function
 *
 * @n: number of parameters
 *
 * Return: sum of all the parameters if success, 0 if fail
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int result = 0;
	va_list num;

	if (n == 0)
		return (0);

	va_start(num, n);
	while (i < n)
	{
		result += va_arg(num, int);
		i++;
	}
	va_end(num);

	return (result);
}
