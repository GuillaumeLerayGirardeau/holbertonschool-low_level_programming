#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 *
 * @h: first node of the list
 * @idx:  index of the list where the new node should be added
 * @n: value the new node has to hold
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *address, *prev_address;
	unsigned int position = 0;

	if (h == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	address = *h;

	while (position < idx)
	{
		address = address->next;
		if (address == NULL)
			return (NULL);
		position++;
	}

	if (address->prev == NULL)
		newnode = add_dnodeint(&*h, n);
	else if (address->next == NULL)
		newnode = add_dnodeint_end(&*h, n);
	else
	{
		prev_address = address->prev;
		address->prev = newnode;
		prev_address->next = newnode;
		newnode->next = address;
		newnode->prev = address->prev;
	}
	return (newnode);
}
