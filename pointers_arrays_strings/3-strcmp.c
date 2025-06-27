#include "main.h"

/**
  *_strcmp - compare two strings
  *
  * @s1 : first string
  * @s2 : second string
  *
  * Return: greatest value
  */

int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int total = 0;

	while (s1[count] || s2[count])
	{
		if (s1[count] != s2[count])
		{
			total = s1[count] - s2[count];
			break;
		}
		count++;
	}

	return (total);
}
