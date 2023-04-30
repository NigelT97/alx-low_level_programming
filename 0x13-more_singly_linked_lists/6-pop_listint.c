#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head node data
 * Return: head notes data
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *x, *a;

	if (*head == NULL)
		return (0);
	x = *head;
	a = x->next;
	i = x->n;
	free(x);
	*head = a;
	return (i);
}
