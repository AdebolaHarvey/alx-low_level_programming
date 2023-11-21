#include "lists.h"

/**
 * pop_listint - Deletes the head node of a
 * linked list.
 * @head: The first node of linked list
 *
 * Return: Head node's data, or 0 when empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *element;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	element = (*head)->next;
	free(*head);
	*head = element;

	return (numb);
}
