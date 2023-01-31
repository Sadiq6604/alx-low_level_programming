#include "lists.h"

/**
 * sum_listint - calculate the sum of all the line data (n) of a list
 * (n) of a list_t list
 * @head: a pointer to the head of the listint_t list
 *
 * Return: if the list is empty -0
 * othervwise - the sum all of the data .
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
}

	return (sum);
}
