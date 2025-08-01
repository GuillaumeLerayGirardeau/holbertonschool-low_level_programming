#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1 : first string
 * @s2 : second string
 * @n : size of the second string
 *
 * Return: string merged
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = NULL;
	unsigned int size1 = 0, size2 = 0, i = 0, j  = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n >= size2)
	{
		n = size2;
	}

	str = malloc(sizeof(char) * (size1 + n + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size1; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';
	return (str);
}
