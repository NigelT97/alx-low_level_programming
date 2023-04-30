#include "lists.h"
/**
 * sum_listint - summ of all the data of listint_t
 * @head: first node
 * Return: result
 */
int sum_listint(listint_t *head)
{
	int m;

	for (m = 0; head != NULL; )
	{
		m += head->n;
		head = head->next;
	}
	return (m);
}
