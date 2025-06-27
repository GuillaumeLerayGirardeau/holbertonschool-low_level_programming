#include "main.h"

/**
  * leet - encode a string into 1337
  *
  * @n : string to convert
  *
  * Return: string converted
  *
  */

char *leet(char *n)
{
	int count = 0;

	while (n[count] != '\0')
	{
		if (n[count] == 'a' || n[count] == 'A')
		{
			n[count] = '4';
		}
		else if (n[count] == 'e' || n[count] == 'E')
		{
			n[count] = '3';
		}
		else if (n[count] == 'o' || n[count] == 'O')
		{
			n[count] = '0';
		}
		else if (n[count] == 't' || n[count] == 'T')
		{
			n[count] = '7';
		}
		else if (n[count] == 'l' || n[count] == 'L')
		{
			n[count] = '1';
		}
		count++;
	}
	return (n);
}
