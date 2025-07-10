#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1 : first string
 * @s2 : second string
 *
 * Return: merged string
 */

char *str_concat(char *s1, char *s2)
{
	char *combo;
	int size1;
	int size2;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
	{}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{}

	combo = malloc(sizeof(char) * (size1 + size2 + 1));

	if (combo == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		combo[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		combo[i + j] = s2[j];
	}

	combo[i + j] = '\0';

	return (combo);
}
