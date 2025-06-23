#include "main.h"

/**
  * more_numbers - prints 10 times the numbers from 0 to 14
  *
  */
void more_numbers(void)
{
	int number = 0;
	int time = 1;

	while (time <= 10)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 10)
			{
				_putchar((number / 10) + '0');
			}
				_putchar((number % 10) + '0');
		}
		_putchar('\n');
		time++;
	}
}
