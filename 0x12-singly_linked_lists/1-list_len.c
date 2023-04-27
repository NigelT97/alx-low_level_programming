#include "lists.h"
/**
 * list_len - number of elements in a link
 * @h: pointer to link
 * Return: result
 */
size_t list_len(const list_t *h)
{
	size_t nodec;

	if (h == NULL)
		return (0);
	for (nodec = 1; h->next != NULL; nodec++)
		h = h->next;
	return (nodec);
}
