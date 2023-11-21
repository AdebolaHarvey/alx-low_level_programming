#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth mode of
 * a linked list.
 * @head: First node in the linked list.
 * @index: Index of the node.
 *
 * Return: nth node of the linked list or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *element = head;

	while (element && x < index)
	{
		element = element->next;
		x++;
	}

	return (element ? element : NULL);
}
