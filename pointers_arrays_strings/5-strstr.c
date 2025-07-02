#include "main.h"
#include <stdio.h>

/**
  * _strstr - locates a substring
  *
  * @haystack : string
  * @needle : substring to found
  *
  * Return: beginning of the located substring
  */

char *_strstr(char *haystack, char *needle)
{
	int time_h = 0;
	int time_n = 0;
	int h = 0;
	char *p = NULL;

	if (haystack[time_h] == '\0')
	{
		return (p);
	}

	while (haystack[time_h] != '\0')
	{
		h= time_h;

		for (time_n = 0; haystack[h] == needle[time_n] && haystack[h] != '\0'; h++)
		{
			time_n++;
			if (needle[time_n] == '\0')
			{
				p = (haystack + h) - time_n;
				return (p);
			}
		}

		time_h++;
	}

	return (p);
}
