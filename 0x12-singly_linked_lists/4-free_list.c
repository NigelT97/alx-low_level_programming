#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: head pointer
 */
void free_list(list_t *head)
{
	list_t *n;
	while ((n = head) != NULL)
	{
		head = head->next;
		free(n->str);
		free(n);
	}
}
