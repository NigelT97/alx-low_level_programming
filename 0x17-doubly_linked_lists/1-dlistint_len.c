#include "lists.h"
/**
 * dlistint_len - returns elements in list
 * @h: list head
 * Return: node number
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h->prev != NULL)
		h = h->prev;
	
	
	
	while (h != NULL)
		{
			i++;
			h = h->next;
		}
	return (i);
}
