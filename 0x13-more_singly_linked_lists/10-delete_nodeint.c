#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at
 * index of a linked list.
 * @head: First node of the linked list.
 * @index: The index to the node to be deleted.
 *
 * Return: 1 (success) or -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *element = *head;
	listint_t *curnt = NULL;
	unsigned int x;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(element);
		return (1);
	}

	while (x < index - 1)
	{
		if (!element || !(element->next))
			return (-1);
		element = element->next;
		x++;
	}

	curnt = element->next;
	element->next = curnt->next;
	free(curnt);

	return (1);
}
