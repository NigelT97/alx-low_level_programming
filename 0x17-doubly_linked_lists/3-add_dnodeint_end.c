#include "lists.h"
/**
 * add_dnodeint_end - adds node at end
 * @head: head list
 * @n: new node
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hd, *nw;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = NULL;
	hd = *head;
	if (hd != NULL)
	{
		while (hd->next != NULL)
			hd = hd->next;
		hd->next = nw;
	}
	else
		*head = nw;
	nw->prev = hd;
	return (nw);
}
