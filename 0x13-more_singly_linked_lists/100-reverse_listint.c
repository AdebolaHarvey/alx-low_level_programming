#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to the first node in linked list
 *
 * Return: First node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *former = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = former;
		former = *head;
		*head = next;
	}

	*head = former;

	return (*head);
}
