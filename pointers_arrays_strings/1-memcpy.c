#include "main.h"

/**
  * _memcpy - copies memory area
  *
  * @dest : destination memory area
  * @src : original memory adress
  * @n : number of bytes to copy
  *
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int time = 0;

	while (time < n)
	{
		dest[time] = src[time];
		time++;
	}

	return (dest);
}
