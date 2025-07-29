#include "lists.h"

/**
 * total_node - return the number of nodes in the list
 *
 * @h: first node of the list
 *
 * Return: numbe rof node in the list
 */
unsigned int total_node(dlistint_t **h)
{
	dlistint_t *list;
	unsigned int total = 0;

	list = *h;

	while (list != NULL)
	{
		list = list->next;
		total++;
	}

	return (total);
}

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
	unsigned int position = 0, total = 0;

	if (*h == NULL)
		return (NULL);

	address = *h;
	total = total_node(h);
	if (idx > total)
	{
		return (NULL);
	}

	while (position < idx)
	{
		address = address->next;
		position++;
	}

	if (idx == 0)
		newnode = add_dnodeint(h, n);
	else if (address == NULL && position == total)
		newnode = add_dnodeint_end(h, n);
	else
	{
		newnode = malloc(sizeof(dlistint_t));
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		prev_address = address->prev;
		address->prev = newnode;
		prev_address->next = newnode;
		newnode->next = address;
		newnode->prev = prev_address;
	}
	return (newnode);
}
