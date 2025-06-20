#include "main.h"

/**
 * times_table - prints the time tables
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int result;
	int times;

	for (times = 0; times <= 9; times++)
	{
		for (a = 0; a <= 9; a++)
		{
			result = a * b;
			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (result < 10 && a != 0)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(result + '0');
			}
			if (a < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		b++;
		_putchar('\n');
	}
}
