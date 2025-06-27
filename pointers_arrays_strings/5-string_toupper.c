#include "main.h"

/**
  * string_toupper - changes all lowercase letters of a string to uppercase
  *
  * @n : string
  *
  * Return: new uppercase string
  *
  */

char *string_toupper(char *n)
{
	int count = 0;

	while (n[count] != '\0')
	{
		if (n[count] >= 'a' && n[count] <= 'z')
		{
			n[count] = n[count] - 32;
		}
		count++;
	}
	return (n);

}
