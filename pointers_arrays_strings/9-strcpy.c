#include "main.h"

/**
  * _strcpy - copy a string
  *
  * @dest : destination
  * @src : source
  *
  * Return: pointer to dest
  *
  */

char *_strcpy(char *dest, char *src)
{
	int original = 0;

	while (src[original] != 0)
	{
		dest[original] = src[original];
		original++;
	}
	return (dest);
}
