#include "main.h"
#include <stdio.h>

/**
  * print_chessboard - prints the chessboard
  *
  * @a : the chessboard
  */

void print_chessboard(char (*a)[8])
{
	int line = 0;
	int column = 0;

	while (line < 8)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar (a[line][column]);
		}
		line++;
		_putchar('\n');
	}
}
