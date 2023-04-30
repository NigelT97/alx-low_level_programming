#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t
 * @h: pointer to node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nc;

	if (h == NULL)
		return (0);
	for (nc = 1; h->next != NULL; nc++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	printf("%d\n", h->n);
	return (nc);
}
