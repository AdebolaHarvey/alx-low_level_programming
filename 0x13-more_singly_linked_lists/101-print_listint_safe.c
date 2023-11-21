#include "lists.h"
#include <stdio.h>

size_t looping_listint_len(const listint_t *head);

/**
 * looping_listint_len - .....
 * @head: ...
 * Return: Number of unique nodes or 0 if it isn't
 * looping.
 */
size_t looping_listint_len(const listint_t *head)
{
	const listint_t *t, *h;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				n++;
				t = t->next;
				h = h->next;
			}

			t = t->next;
			while (t != h)
			{
				n++;
				t = t->next;
			}

			return (n);
		}

		t = t->next;
		h = (h->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a linked list.
 * @head: Pointer to the first node.
 *
 * Return: Number of nodes in linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nd, i = 0;

	nd = looping_listint_len(head);

	if (nd == 0)
	{
		for (; head != NULL; nd++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nd; i++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("[%p]%d\n", (void *)head, head->n);
	}

	return (nd);
}
