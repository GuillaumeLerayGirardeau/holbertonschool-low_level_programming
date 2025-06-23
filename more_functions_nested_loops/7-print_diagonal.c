#include "main.h"

/**
  *print_diagonal - draws a diagonal line
  *@n : length of the diagonal
  */
void print_diagonal(int n)
{
	int space = 0;
	int memory_space = 0;

	if (n > 0)
	{
		while (n > 0)
		{
			while (space != 0)
			{
				_putchar(' ');
				space--;
			}
			_putchar('\\');
			_putchar('\n');
			n--;
			memory_space++;
			space = memory_space;
		}
	}
	else
	{
		_putchar('\n');
	}
}
