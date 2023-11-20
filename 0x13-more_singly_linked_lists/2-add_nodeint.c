#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning
 * of a listint_t list.
 * @head: The first node.
 * @n: Number of nodes to insert in new node.
 *
 * Return: Address of new element or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *data;

	data = malloc(sizeof(listint_t));
	if (!data)
		return (NULL);

	data->n = n;
	data->next = *head;
	*head = data;

	return (data);
}
