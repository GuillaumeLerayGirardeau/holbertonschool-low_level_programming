#include "lists.h"

/**
 * check_null - check if the list points to null value
 *
 * @h: list to check
 *
 * Return: 1 if success
 */
unsigned int check_null(const list_t *h)
{
	if (h->next != NULL)
	{
		return (print_list(h->next));
	}
	else
	{
		return (0);
	}
}

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: list to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		return (1 + check_null(h));
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
		return (1 + check_null(h));
	}

	return (0);
}
