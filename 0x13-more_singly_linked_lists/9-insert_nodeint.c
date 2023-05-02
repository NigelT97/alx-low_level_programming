#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: first node pointer
 * @idx: index list
 * @n: position
 * Return: address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nn, *c;
	unsigned int i;

	c = *head;
	nn = malloc(sizeof(listint_t));
	if (!nn || !head)
		return (NULL);
	nn->n = n;
	nn->next = NULL;
	if (idx != 0)
	{
	for (i = 0; i < idx && *head != NULL; i++)
	{
		if (i == idx - 1)
		{
			nn->next = c->next;
			c->next = nn;
			return (nn);
		}
		else
			c = c->next;
	}
	}
	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
		return (nn);
	}
	return (NULL);
}
