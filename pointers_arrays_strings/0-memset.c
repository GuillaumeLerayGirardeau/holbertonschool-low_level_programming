#include "main.h"

/**
  * _memset - fills memory with a constant byte
  *
  * @s : area
  * @n : number of bytes to fill
  * @b : constant byte
  *
  * Return: new memory 
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int time = 0;

	while (time < n)
	{
		s[time] = b;
		time++;
	}

	return (s);
}
