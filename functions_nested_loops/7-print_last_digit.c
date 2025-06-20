#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a : digit
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int a)
{
	int last = a % 10;

	if (last < 0)
	{
		last = last * -1;
		_putchar('0' + last);
	}
	else
	{
		_putchar('0' + last);
	}
	return (last);
}
