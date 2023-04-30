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
	if (nn == NULL || (idx != 0 && *head == NULL))
		return (NULL);
	nn->n = n;
	for (i = 0; i < idx - 1 && head != NULL; i++)
	{
		c = c->next;
		if (c == NULL)
			return (NULL);
	}
	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
	}
	else if (c->next)
	{
		nn->next = c->next;
		c->next = nn;
	}
	else
	{
		nn->next = NULL;
		c->next = nn;
	}
	return (nn);
}
