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
	int time_hay = 0;
	int time_need = 0;
	int lenght_need = 0;
	int a = 0;
	char *p = NULL;

	while (needle[lenght_need] != '\0')
	{
		lenght_need++;
	}

	while (haystack[time_hay] != '\0')
	{
		a = 0;
		time_need = 0;

		while (haystack[time_hay] == needle[time_need] && needle[time_need] != '\0')
		{
			time_hay++;
			time_need++;
			a++;
		}

		if (a == lenght_need && lenght_need != 0)
		{
			p = (haystack + time_hay) - time_need;
			break;
		}
		time_hay -= time_need;
		time_hay++;
	}
	return (p);
}
