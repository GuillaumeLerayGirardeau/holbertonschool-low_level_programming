#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * length - Calculates the length of a string.
 * @a: The string to measure.
 *
 * Return: The number of characters in the string (excluding null terminator).
 *         Returns 0 if the string is NULL.
 */
int length(char *a)
{
	int i = 0;
	int length = 0;

	if (a == NULL)
	{
		return (0);
	}

	while (a[i] != '\0')
	{
		length++;
		i++;
	}

	return (length);
}

/**
 * copystring - Copies a string from origin to destination.
 * @dest: The destination buffer to copy into.
 * @origin: The source string to copy from.
 *
 * Return: A pointer to the destination string.
 *         Returns NULL if either argument is NULL.
 */

char *copystring(char *dest, char *origin)
{
	int i = 0;

	if (dest == NULL || origin == NULL)
		return (NULL);

	while (origin[i] != '\0')
	{
		dest[i] = origin[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);

}

/**
 * new_dog - Creates a new dog structure with given name, age, and owner.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner's name.
 *
 * Return: Pointer to the newly created dog_t structure.
 *         Returns NULL on failure (e.g. malloc error).
 *
 * Description: Allocates memory for a new dog structure, including space
 *              for the name and owner strings. Initializes the fields
 *              and handles NULL inputs and allocation errors.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL)
		name = "";
	if (owner == NULL)
		owner = "";
	if (age <= 0)
		age = 0;

	/* Malloc */
	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * length(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(char) * length(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	/* Initialisation */
	newdog->name = copystring(newdog->name, name);
	newdog->age = age;
	newdog->owner = copystring(newdog->owner, owner);

	return (newdog);

}
