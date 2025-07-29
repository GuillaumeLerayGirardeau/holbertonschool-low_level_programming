#include "lists.h"

/**
 * free_list - free a list_t list
 *
 * @head: first node of the list
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
