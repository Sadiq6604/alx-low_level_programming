#include "lists.h"

/**
 * pop_listint - Deletes the head node of aa listint_t ;list.
 * @head: a pointer to the address of the head of the listint_t list.
 *
 * Return: if the linked list empty - 0 otherwisse- the head nodes dat(n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
