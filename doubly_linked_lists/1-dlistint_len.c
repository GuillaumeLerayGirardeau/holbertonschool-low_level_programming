#include "lists.h"

/**
 * dlistint_len - count the number of nodes in a list
 *
 * @h: fist node of the list
 *
 * Return: the number of node in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
	{
		return (i);
	}

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
