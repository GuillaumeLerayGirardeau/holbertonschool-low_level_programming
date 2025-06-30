#include "main.h"
#include <stdio.h>

/**
  * _strchr - locates a character in a string
  *
  * @s : the string
  * @c : the character
  *
  * Return: first occurence of c or NULL is the character is not found
  */

char *_strchr(char *s, char c)
{
	int time = 0;
	char *p = NULL;

	while (s[time] != c && s[time] != '\0')
	{
		time++;
	}

	if (s[time] == c)
	{
		p = s + time;
	}
	else
	{
		p = NULL;
	}

	return (p);
}
