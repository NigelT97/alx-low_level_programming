#include "lists.h"
/**
 * free_listint_safe - frunction that frees list
 * @h: pointer to first node
 * Return: size of list freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t ln = 0;
	int df;
	listint_t *c;

	if (!h || !(*h))
		return (0);

	while (*h)
	{
		df = *h - (*h)->next;
		if (df > 0)
		{
			c = (*h)->next;
			free(*h);
			*h = c;
			ln++;
		}
		else
		{
			free(*h);
			ln++;
			break;
		}
	}
	*h = NULL;
	return (ln);
}
