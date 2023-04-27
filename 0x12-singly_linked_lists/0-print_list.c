#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodec;

	if (h == NULL)
		return (0);
	for (nodec = 1; h->next != NULL; nodec++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->ln, h->str);
		h = h->next;
	}
	printf("[%d] %s\n", h->ln, h->str);
	return (nodec);
}
