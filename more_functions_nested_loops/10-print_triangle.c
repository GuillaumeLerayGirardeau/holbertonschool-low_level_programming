#include "main.h"

/**
  * print_triangle - print a trangle
  *
  * @size : size of the triangle
  */
void print_triangle(int size)
{
	int space;
	int increment_print = 1;
	int print;

	if (size > 0)
	{
		while (size > 0)
		{
			for (space = size; space > 1; space--)
			{
				_putchar(' ');
			}
			for (print = increment_print; print >= 1; print--)
			{
				_putchar('#');
			}
			_putchar('\n');
			size--;
			increment_print++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
