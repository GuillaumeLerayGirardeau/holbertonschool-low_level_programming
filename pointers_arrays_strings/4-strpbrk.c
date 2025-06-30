#include "main.h"
#include <stdio.h>

/**
  * _strpbrk - searches a string for any of a set of bytes
  *
  * @s : string
  * @accept : bytes to search
  *
  * Return: bytes in s that matches accept
  */

char *_strpbrk(char *s, char *accept)
{
	int time_s = 0;
	int time_accept = 0;
	char *p = NULL;
	int found = 0;

	while (s[time_s] != '\0')
	{
		for (time_accept = 0; accept[time_accept] != '\0'; time_accept++)
		{
			if (s[time_s] == accept[time_accept])
			{
				found = 1;
				p = s + time_s;
				break;
			}
		}
		if (found == 1)
		{
			break;
		}
		time_s++;
	}
	return (p);
}
