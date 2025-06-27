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
	int pos;

	char lettre[] = "AEOTL";
	int chiffre[] = {'4', '3', '0', '7', '1'};


	while (n[count] != '\0')
	{
		for (pos = 0; pos <= 4; pos++)
		{
			if (n[count] == lettre[pos] || n[count] == (lettre[pos] + 32))
			{
				n[count] = chiffre[pos];
			}
		}
		count++;
	}
	return (n);
}
