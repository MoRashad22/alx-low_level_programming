#include "lists.h"
/***
 * add_nodeint_end - adding node at the end of list
 * @head: pointing to first node
 * @n: new node's value
 * Return: new node's address or NULL if failed
 * made at night
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t chi;

	listint_t updt = malloc(sizeof(listint_t));

	if (updt == NULL)
		return (NULL);

	updt->n = n;
	updt->next = NULL;

	if (!*head)
	{
		*head = updt;
		return (updt);
	}

	chi = *head;
	while (chi->next)
		chi = chi->next;
	chi->next = updt;
	return (updt);
}
