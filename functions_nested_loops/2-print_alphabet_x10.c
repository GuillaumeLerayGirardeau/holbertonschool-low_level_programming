#include "main.h"

/**
  *print_alphabet_x10 - print the alphabet 10 times
  *
  */
void print_alphabet_x10(void)
{
	int time = 1;
	char alpha;

	while (time <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		time++;
	}
}
