#include "main.h"

/**
  * print_rev - print a string in reverse
  *
  * @s : the string
  *
  */
void print_rev(char *s)
{
	int number = 0;

	while (s[number] != '\0')
	{
		number++;
	}
	while (number >= 0)
	{
		number--;
		_putchar(s[number]);
	}
	_putchar('\n');
}
