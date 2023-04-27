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
	{
		printf("[%d] %s\n", 0, "(nil)");
		return (0);
	}
	nodec = 1;
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodec++;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (nodec);
}
