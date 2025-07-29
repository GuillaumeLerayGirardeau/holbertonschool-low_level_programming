#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 *
 * @head: first node of the list
 *
 * Return: the sum of all the data, 0 if NULL
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	unsigned int total = 0;

	if (head == NULL)
	{
		return (0);
	}

	node = head;

	while (node != NULL)
	{
		total += node->n;
		node = node->next;
	}

	return (total);
}
