#include "main.h"

/**
  * _atoi - convert a string into a integer
  *
  * @s : string
  *
  * Return: result
  *
  */
int _atoi(char *s)
{
	int sign = 1;
	int chiffre = 0;
	unsigned int number = 0;
	int d = 0;

	while (s[chiffre] != '\0')
	{
		if (s[chiffre] == '-')
		{
			sign *= -1;
		}
		while (s[chiffre] <= '9' && s[chiffre] >= '0')
		{
			d = 1;
			number = (number * 10) + (s[chiffre] - '0');
			chiffre++;
		}
		if (d == 1)
		{
			break;
		}
		chiffre++;
	}

	number *= sign;

	return (number);
}
