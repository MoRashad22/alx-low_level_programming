#include "lists.h"
/**
 * add_nodeint_end - adding node at the end of list
 * @head: pointing to first node
 * @n: new node's value
 *
 * Return: new node's address or NULL if failed
 * made at night
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *updt = malloc(sizeof(listint_t));
	listint_t *updt2;

	if (updt == NULL)
		return (NULL);

	updt->n = n;
	updt->next = NULL;

	if (*head == NULL)
	{
		*head = updt;
		return (updt);
	}

	updt2 = *head;
	while (updt2->next)
		updt2 = updt2->next;
	updt2->next = updt;
	return (updt);
}
