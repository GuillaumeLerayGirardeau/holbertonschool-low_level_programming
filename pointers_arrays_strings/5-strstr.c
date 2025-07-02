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
	int length = 0;

	if (haystack[time_h] != '\0' && needle[time_n] != '\0')
	{
		while (needle[time_n] != 0)
		{
			time_n++;
		}

		length = time_n;

		while (haystack[time_h] != '\0')
		{
			time_n = 0;

			while (haystack[time_h] == needle[time_n] &&
					needle[time_n] != '\0' &&
					haystack[time_h] != '\0')
			{
				haystack++;
				time_n++;
			}

			if (time_n == length)
			{
				p = (haystack + time_h - time_n);
				return (p);
			}

			time_h -= time_n;
			time_h++;
		}
	}
	return (p);
}
