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
	char *p = NULL;

	if (needle[time_n] == '\0')
	{
		return (haystack);
	}

	for (time_h = 0; haystack[time_h] != '\0'; time_h++)
	{
		if (haystack[time_h] == needle[0])
		{
			for (time_n = 0; needle[time_n] != '\0'; time_n++)
			{
				if (haystack[time_h + time_n] != needle[time_n])
				{
					break;
				}
			}
			if (needle[time_n] == '\0')
			{
				p = &haystack[time_h];
				return (p);
			}
		}
	}
	return (p);
}
