#include "lists.h"
/**
 * print_dlistint - all elements printed
 * @h: head list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (i);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	return (i);
}
