#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node
 * @head: head list
 * @index: nth node
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	for (n = 0; head != NULL; n++)
	{
		if (n == index)
			break;
		head = head->next;
	}
	return (head);
}
