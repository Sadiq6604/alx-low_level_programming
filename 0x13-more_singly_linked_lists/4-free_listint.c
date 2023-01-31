#include "lists.h"

/**
 * free_listint - free a list_t list.
 * @head: a pointer to the head of the listint_t list to the freed.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
