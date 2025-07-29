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

	return (total - 1);
}

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 *
 * @head: first node of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if success, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *position, *temp;
	unsigned int count = 0, total = 0;

	if (*head == NULL)
		return (-1);
	position = *head;
	total = total_node(head);
	if (index > total)
		return (-1);
	while (count < index)
	{
		position = position->next;
		count++;
	}
	if (index == 0)
	{
		position = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(position);
		return (1);
	}
	else if (index == total)
	{
		temp = position;
		position = position->prev;
		position->next = NULL;
		free(temp);
		return (1);
	}
	else
	{
		temp = position;
		position = position->prev;
		position->next = temp->next;
		position = position->next;
		position->prev = temp->prev;
		free(temp);
		return (1);
	}
}
