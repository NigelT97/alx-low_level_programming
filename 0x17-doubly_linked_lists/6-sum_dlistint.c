#include "lists.h"
/**
 * sum_dlistint - returns total
 * @head: head list
 * Return: result
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			total += head->n;
			head = head->next;
		}
	}
	return (total);
}
