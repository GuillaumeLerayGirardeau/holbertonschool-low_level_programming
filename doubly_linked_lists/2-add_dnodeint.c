#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: first node of the list
 * @n: value that the node have to hold
 *
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *address;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	address = *head;
	address->prev = newnode;
	*head = newnode;

	return (newnode);
}
