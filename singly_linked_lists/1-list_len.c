#include "lists.h"

/**
 * list_len - count the number of elements in a linked list_t list
 *
 * @h: the list
 *
 * Return: number of node in the list
 */

size_t list_len(const list_t *h)
{
	unsigned int node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
