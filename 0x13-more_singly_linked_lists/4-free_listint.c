#include "lists.h"
/**
 * free_listint - freeing a list
 * @head: first node's address
 *
 * Return: nothing to return
 * made at night
 */
void free_listint(listint_t *head)
{
	listint_t *freedom;

	while (head)
	{
		freedom = head;
		head = head->next;
		free(freedom);
	}
}
