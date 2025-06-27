#include "main.h"

/**
  * cap_string - capitalize all words
  *
  * @n : the string
  *
  * Return: the final string
  *
  */

char *cap_string(char *n)
{
	int count = 0;
	int letter = 0;

	while (n[count] != '\0')
	{
		if (n[count] >= 'a' && n[count] <= 'z')
		{
			if (n[count - 1] == ',' || n[count - 1] == ';' || n[count - 1] == '.' ||
					n[count - 1] == '!' || n[count - 1] == '?' || n[count - 1] == '\"' ||
					n[count - 1] == ')' || n[count - 1] == '(' ||
					n[count - 1] == '{' || n[count - 1] == '}' || n[count - 1] == ' ' ||
					n[count - 1] == '\n' || n[count - 1] == '\t' || count == 0)
			{
				letter = 0;
				while (letter != n[count])
				{
					letter++;
				}
				n[count] = letter - 32;
			}
		}
		count++;
	}
	return (n);
}
