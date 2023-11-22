#include "lists.h"

/**
 * free_listint_safe - Frees a linked list.
 * @h: The node to be freed.
 *
 * Return: Size of the list freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int d;
	listint_t *t;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			length++;
		}

		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
