#include "main.h"

/**
  * _puts - prints a string, followed by a new line
  *
  * @str : the string to print
  */
void _puts(char *str)
{
	int number = 0;

	while (str[number] != '\0')
	{
		_putchar(str[number]);
		number++;
	}
	_putchar('\n');
}
