#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the last
 * @head: head of first node
 * @n: count of new node
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn, *x;

	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);
	nn->n = n;
	nn->next = NULL;
	x = *head;
	if (x == NULL)
		*head = nn;

	else
	{
		for (; x->next != NULL;)
			x = x->next;
		x->next = nn;
	}
	return (*head);
}
