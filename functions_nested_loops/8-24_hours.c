#include "main.h"

/**
  * jack_bauer - prints every minutes of the day of Jack Bauer
  *
  */
void jack_bauer(void)
{
	int g_heure = 0;
	int p_heure = 0;
	int g_minute = 0;
	int p_minute = 0;

	for (; g_heure <= 2; g_heure++)
	{
		for (p_heure = 0; p_heure <= 9; p_heure++)
		{
			for (g_minute = 0; g_minute <= 5; g_minute++)
			{
				for (p_minute = 0; p_minute <= 9; p_minute++)
				{
					_putchar(g_heure + '0');
					_putchar(p_heure + '0');
					_putchar(':');
					_putchar(g_minute + '0');
					_putchar(p_minute + '0');
					_putchar('\n');
				}
			}
			if (g_heure == 2 && p_heure == 3 && g_minute > 5 && p_minute > 9)
				break;
		}
	}
}
