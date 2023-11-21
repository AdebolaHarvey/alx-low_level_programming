#include "lists.h"

/**
 * sum_listint - returns sum of all the data of a
 * listint_t linked list.
 * @head: The first node of the linked list.
 * Return: Sum of all the data(n) or 0 if empty.
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *element = head;

	while (element)
	{
		total += element->n;
		element = element->next;
	}

	return (total);
}
