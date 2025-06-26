#include "main.h"

/**
  * puts_half - print the half of a string
  *
  * @str : the string to print
  *
  */
void puts_half(char *str)
{
	int half;
	int full_letter = 0;

	while (str[full_letter] != '\0')
	{
		full_letter++;
	}

	half = full_letter / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
