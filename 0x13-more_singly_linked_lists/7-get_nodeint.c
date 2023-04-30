#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a listint
 * @head: first pointer
 * @index: nth node
 * Return: result
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index && head != NULL; n++)
		head = head->next;
	return (head);
}
