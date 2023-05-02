#include "lists.h"
/**
 * add_nodeint - adding new node at the beginning of list
 * @head: first node's adress
 * @n: integer containing new node's value
 *
 * Return: new node's address
 * made at night
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *plus = malloc(sizeof(listint_t));

	if (plus == NULL)
		return (NULL);

	plus->n = n;
	plus->next = *head;
	*head = plus;
	return (plus);
}
