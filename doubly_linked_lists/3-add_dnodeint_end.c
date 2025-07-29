#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: first node of the list
 * @n: value the new node has to hold
 *
 * Return: address of the new node, NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *address;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
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
		newnode->prev = address;
	}

	return (newnode);
}
