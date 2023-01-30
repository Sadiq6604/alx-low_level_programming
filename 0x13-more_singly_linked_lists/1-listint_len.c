#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number element`
 * in a liked list listint_t list.
 * @h: A point to the head of the listint_t list.
 *
 * Return: the number of element in the list_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

