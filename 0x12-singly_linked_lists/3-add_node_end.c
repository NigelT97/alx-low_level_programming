#include "lists.h"
/**
 * add_node_end - adds new node at the end
 * @head: head pointer pointer
 * @str: string
 * Return: result
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn, *bn;
	size_t ln;

	for (ln = 0; str[ln] != '\0'; ln++)
		continue;
	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);
	nn->str = strdup(str);
	nn->len = ln;
	nn->next = NULL;
	bn = *head;
	if (bn == NULL)
		*head = nn;
	else
	{
		while (bn->next != NULL)
			bn = bn->next;
		bn->next = nn;
	}
	return (*head);
}
