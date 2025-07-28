#include "lists.h"

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
	newnode->len = strlen(str);
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
