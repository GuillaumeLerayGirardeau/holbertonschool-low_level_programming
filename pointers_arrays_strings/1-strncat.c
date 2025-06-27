#include "main.h"

/**
  * _strncat - concatenates two strings
  *
  * @dest : original string
  * @src : second string
  * @n : number of letter from the second string
  *
  * Return: merged string
  */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int all_letters = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	all_letters = count;

	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[all_letters] = src[count];
		all_letters++;
	}

	return (dest);
}
