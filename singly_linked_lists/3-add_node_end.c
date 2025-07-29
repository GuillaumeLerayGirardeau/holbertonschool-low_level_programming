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
 * add_node_end - add a new node at the end of a list_t list
 *
 * @head: adress of the previous node
 * @str: string to add in the new node
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *address, *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		address = *head;
		while (address->next != NULL)
		{
			address = address->next;
		}
		address->next = newnode;
	}

	return (newnode);
}
