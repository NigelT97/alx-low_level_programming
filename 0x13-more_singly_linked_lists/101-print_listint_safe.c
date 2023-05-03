#include "lists.h"
/**
 * print_listint_safe - prints a listint_t list
 * @head: pointer to first node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *c = NULL, *ln = NULL;
	size_t nn, i = 0;

	c = head;
	while (c)
	{
		printf("[%p] %d\n", (void *)c, c->n);
		i++;
		c = c->next;
		ln = head;
		nn = 0;
		while (nn < i)
		{
			if (c == ln)
			{
				printf("-> [%p] %d\n", (void *)c, c->n);
				return (i);
			}
			ln = ln->next;
			nn++;
		}
		if (!head)
			exit(98);
	}
	return (i);
}
