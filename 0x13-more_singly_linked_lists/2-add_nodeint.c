#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * @head: a pointer top the address of the head of listint_t list
 * @n: the integer  for the node
 *
 * Return: if the function fail - Null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

