#include "main.h"
#include <stdio.h>

/**
  * _strspn - gets the length of a prefix substring
  *
  * @s : string
  * @accept : bytes to be search
  *
  * Return: number of bytes from s with bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	int time_s = 0;
	int time_accept = 0;
	unsigned int lenght = 0;

	while (s[time_s] != '\0')
	{
		for (time_accept = 0; accept[time_accept] != '\0'; time_accept++)
		{
			if (s[time_s] == accept[time_accept])
			{
				lenght++;
				break;
			}
		}
		if (accept[time_accept] == '\0')
		{
			break;
		}
		time_s++;
	}

	return (lenght);
}
