#include "lists.h"
/**
 * pop_listint - deleting head node of a linked list
 * @head: pointing to head pointer
 *
 * Return: integer (success)
 * made at night
 */
int pop_listint(listint_t **head)
{
	listint_t *rmv;
	int popping;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	rmv = (*head)->next;
	popping = (*head)->n;
	free(*head);
	*head = rmv;
	return (popping);
}
