#include "main.h"

/**
  * rev_string - reverses a string
  *
  * @s : the string
  *
  */
void rev_string(char *s)
{
	int number_letter = 0;
	int debut_letter = 0;
	int milieu;
	int swap;

	while (s[number_letter] != '\0')
	{
		number_letter++;
	}

	number_letter -= 1;
	milieu = number_letter / 2;

	for (; debut_letter < milieu ; debut_letter++)
	{
		swap = s[debut_letter];
		s[debut_letter] = s[number_letter];
		s[number_letter] = swap;
		number_letter--;
	}

}
