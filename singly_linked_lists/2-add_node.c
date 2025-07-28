#include "lists.h"

/**
 * _strlen - count the length of a string
 *
 * @c: the string
 *
 * Return: length of the string
 */
int _strlen(const char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * add_node - add a new node at the beginning of a list_t list
 *
 * @head: adress of the previous node
 * @str: string to add in the new node
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
