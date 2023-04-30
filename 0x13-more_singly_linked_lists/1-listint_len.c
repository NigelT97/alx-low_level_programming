#include "lists.h"
/**
 * listint_len - number of elements in a linked listint_t list
 * @h: first node
 * Return: result
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	if (h == NULL)
		return (0);
	for (n = 1; h->next != NULL;)
	{
		if (h->n != '\0')
			n++;
		h = h->next;
	}
	return (n);
}
