#include "main.h"

/**
  * print_square - print a square
  * @size : size of the square
  *
  */
void print_square(int size)
{
	char symbol = '#';
	int initial_value = size;
	int line = size;

	if (initial_value > 0)
	{
		while (line > 0)
		{
			for (size = initial_value; size > 0; size--)
			{
				_putchar(symbol);
			}
			_putchar('\n');
			line--;
		}
	}
	if (initial_value <= 0)
	{
		_putchar('\n');
	}
}
