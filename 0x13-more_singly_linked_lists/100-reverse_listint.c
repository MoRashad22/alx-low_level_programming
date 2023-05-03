#include "lists.h"
/**
 * reverse_listint - reversing listint_t list
 * @head: pointing to the head pointer
 *
 * Return: head's adress
 * made at night
 */
listint_t *reverse_listint(listint_t **head)
{
	listint *revs = NULL, *nxt = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	revs = *head;
	*head = NULL;
	while (revs)
	{
		nxt = (revs)->next;
		(revs)->next = *head;
		*head = revs;
		revs = next;
	}
	return (*head);
}
