#include "main.h"

/**
  * _strcat - concatenates two strings
  *
  * @dest : the original string
  * @src : the string to add
  *
  * Return: both string merged
  */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int all_letter = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	all_letter = count;

	for (count = 0; src[count] != '\0'; count++)
	{
		dest[all_letter] = src[count];
		all_letter++;
	}
	dest[all_letter] = '\0';
	return (dest);
}
