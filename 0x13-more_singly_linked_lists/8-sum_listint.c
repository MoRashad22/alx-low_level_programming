#include "lists.h"
/**
 * sum_listint - returning sum of all data of linked lists
 * @head: pointing to head pointer
 *
 * Return: total of node's data
 */
int sum_listint(listint_t *head)
{
	int total;

	total = 0;


	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
