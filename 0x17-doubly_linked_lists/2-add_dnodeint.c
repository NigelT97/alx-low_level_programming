#include "lists.h"
/**
 * add_dnodeint - adss new node at start
 * @head: head list
 * @n: node value
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;
	dlistint_t *hd;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->prev = NULL;
	hd = *head;
	if (hd != NULL)
	{
		while (hd->prev != NULL)
			hd = hd->prev;
	}
	nw->next = hd;
	if (hd != NULL)
		hd->prev = nw;
	*head = nw;
	return (nw);
}
