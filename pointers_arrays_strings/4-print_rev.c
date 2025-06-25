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
	number -= 1;
	while (number >= 0)
	{
		_putchar(s[number]);
		number--;
	}
	_putchar('\n');
}
