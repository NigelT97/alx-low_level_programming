#include "lists.h"
/**
 * add_node - adds new odd
 * @head: pointer to pointer head
 * @str: string
 * Return: result
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;
	size_t ln;

	for (ln = 0; str[ln] != '\0'; ln++)
		continue;
	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);
	if (*head == NULL)
		nnode->next = NULL;
	else
		nnode->next = *head;
	nnode->str = strdup(str);
	nnode->len = ln;
	*head = nnode;
	return (*head);
}
