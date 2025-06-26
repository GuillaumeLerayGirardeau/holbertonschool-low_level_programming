#include "main.h"

/**
  * puts2 - prints one out of two character
  *
  * @str : the string to print
  *
  */
void puts2(char *str)
{
	int bytwo = 0;

	while (str[bytwo] != '\0')
	{
		_putchar(str[bytwo]);
		bytwo++;
		if (str[bytwo] == '\0')
		{
			break;
		}
		bytwo++;
	}
	_putchar('\n');
}
