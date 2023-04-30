#include "lists.h"
/**
 * free_listint2 - freess listint_t list sets head to NULL
 * @head: first node pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *c, *x;

	if (head != NULL)
	{
		c = *head;
		for (; (x = c) != NULL; )
		{
			c = c->next;
			free(x);
		}
		*head = NULL;
	}
}
