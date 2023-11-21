#include "lists.h"

/**
 * free_listint -Frees a linked list.
 * @head: The linked list ti be freed.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *element;

	while (head)
	{
		element = head->next;
		free(head);
		head = element;
	}
}
