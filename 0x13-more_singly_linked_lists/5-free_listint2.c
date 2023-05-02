#include "lists.h"
/**
 * free_listint2 - freeing listint_t list
 * @head: head pointer's pointer
 * Return: nothing
 * made at night
 */
void free_listint2(listint_t **head)
{
	listint_t *action;

	if (!head)
	return;

	while (*head != NULL)
	{
		action = (*head)->next;
		free(*head);
		action = *head;
	}
	*head = NULL;
}

