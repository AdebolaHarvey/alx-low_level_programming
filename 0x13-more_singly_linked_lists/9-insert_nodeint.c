#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 * at a given position.
 * @head: First node of the linked list.
 * @idx: The index in the node of linked list.
 * @n: The new node to be added.
 *
 * Return: Address of the new node or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *data;
	listint_t *element = *head;

	data = malloc(sizeof(listint_t));
			if (!data || !head)
			return (NULL);

			data->n = n;
			data->next = NULL;

			if (idx == 0)
			{
			data->next = *head;
			*head = data;
			return (data);
			}

			for (x = 0; element && x < idx; x++)
			{
			if (x == idx - 1)
			{
			data->next = element->next;
			element->next = data;
			return (data);
			}
			else
				element = element->next;
			}

	return (NULL);
}
