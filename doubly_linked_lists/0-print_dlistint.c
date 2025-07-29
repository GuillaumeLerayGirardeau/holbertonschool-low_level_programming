#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 *
 * @h: fist node of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
	{
		return (i);
	}

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
