#include "lists.h"
/**
 * add_nodeint - adds new node at the beginning of a listint_t list
 * @head: start of the node
 * @n: count on nodes to add
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn;

	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);
	if (*head == NULL)
		nn->next = NULL;
	else
		nn->next = *head;
	nn->n = n;
	*head = nn;
	return (*head);
}
