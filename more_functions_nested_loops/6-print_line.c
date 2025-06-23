#include "main.h"

/**
  * print_line - print a straight line
  * @n : lenght of the line
  *
  */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
