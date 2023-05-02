#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at specific index
 * @head: first pointer node
 * @index: specified point of deletion
 * Return: success or failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = *head, *c = NULL;
	unsigned int i;

	if (h == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!h || !(h->next))
			return (-1);
		h = h->next;
	}
	c = h->next;
	h->next = c->next;
	free(c);
	return (1);
	}
