#include "lists.h"

/**
 * get_nodeint_at_index - locate a given node of
 *
 * @head:a pointer to the head of the listint_t list
 * @index: yhe index of the node to locate - indices start
 *
 * Return: if the node does not exist - NULL
 * otherwise - the location nodes.
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
