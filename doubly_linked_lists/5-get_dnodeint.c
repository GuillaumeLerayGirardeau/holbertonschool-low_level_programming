#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: first node of the list
 * @index: index of the node
 *
 * Return: node, NULL if it fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	node = head;
	while (i < index)
	{
		node = node->next;
		if (node == NULL)
		{
			return (NULL);
		}
		i++;
	}

	return (node);
}
