#include "main.h"

/**
  *print_numbers - prints the numbers from 0 to 9
  *
  */
void print_numbers(void)
{
	int number = 0;

	while (number < 10)
	{
		_putchar(number + '0');
		number++;
	}
	_putchar('\n');
}
