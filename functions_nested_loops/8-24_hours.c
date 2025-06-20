#include "main.h"

/**
  * jack_bauer - prints every minutes of the day of Jack Bauer
  *
  */
void jack_bauer(void)
{
	int grande_heure = 0;
	int petite_heure = 0;
	int grande_minute = 0;
	int petite_minute = 0;

	for (; grande_heure <= 2; grande_heure++)
	{
		for (petite_heure = 0; petite_heure <= 9; petite_heure++)
		{
			for (grande_minute = 0; grande_minute <= 5; grande_minute++)
			{
				for (petite_minute = 0; petite_minute <= 9; petite_minute++)
				{
					_putchar(grande_heure + '0');
					_putchar(petite_heure + '0');
					_putchar(':');
					_putchar(grande_minute + '0');
					_putchar(petite_minute + '0');
					_putchar('\n');
				}
			}
			if (grande_heure == 2 && petite_heure == 3 && grande_minute > 5 && petite_minute > 9)
				break;
		}
	}
}
