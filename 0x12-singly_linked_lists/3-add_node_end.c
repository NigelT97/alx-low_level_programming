#include "lists.h"
/**
 * add_node_end - adds new node at the end
 * @head: head pointer pointer
 * @str: string
 * Return: result
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn;
	size_t ln;

	for (ln = 0; str[ln] != '\0'; ln++)
		continue;
	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);
	if (*head == NULL)
		nn->next = NULL;
	else
		nn->next = *head;
	nn->str = strdup(str);
	nn->len = ln;
	*head = nn;
	return (*head);
}
