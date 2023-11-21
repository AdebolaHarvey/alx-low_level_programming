#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * of linked list.
 * @head: The first node.
 * @n: The new node to be added at the end.
 *
 * Return: New element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *data;
	listint_t *t = *head;

	data = malloc(sizeof(listint_t));
	if (!data)
		return (NULL);

	data->n = n;
	data->next = NULL;

	if (*head == NULL)
	{
		*head = data;
		return (data);
	}

	while (t->next)
		t = t->next;

	t->next = data;

	return (data);
}
