#include "lists.h"
/**
 * free_listint2 - Frees a linked list.
 * @head: Linked list to be freed.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *element;

	if (head == NULL)
		return;

	while (*head)
	{
		element = (*head)->next;
		free(*head);
		*head = element;
	}
	*head = NULL;
}
