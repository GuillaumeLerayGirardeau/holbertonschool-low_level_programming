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
	int size1 = 0;
	int size2 = 0;

	if (s1 != NULL)
	{
		for (size1 = 0; s1[size1] != '\0'; size1++)
		{}
	}

	if (s2 != NULL)
	{
		for (size2 = 0; s2[size2] != '\0'; size2++)
		{}
	}

	if (size1 > 0 || size2 > 0)
	{
		combo = malloc(sizeof(char) * (size1 + size2) + 1);

		if (combo != NULL)
		{
			for (size1 = 0; s1[size1] != '\0'; size1++)
			{
				combo[size1] = s1[size1];
			}
			for (size2 = 0; s2[size2] != '\0'; size2++)
			{
				combo[size1] = s2[size2];
				size1++;
			}

			combo[size1] = '\0';

			return (combo);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}

}
