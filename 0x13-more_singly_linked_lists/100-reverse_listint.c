#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer
 * Return: pointer to reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *y = NULL, *x = NULL;

	while (*head)
	{
		x = (*head)->next;
		(*head)->next = y;
		y = *head;
		*head = x;
	}
	*head = y;
	return (*head);
}
