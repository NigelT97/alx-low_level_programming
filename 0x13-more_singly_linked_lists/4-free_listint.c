#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: first node
 */
void free_listint(listint_t *head)
{
	listint_t *c;

	for (; (c = head) != NULL; )
	{
		head = head->next;
		free(c);
	}
}
