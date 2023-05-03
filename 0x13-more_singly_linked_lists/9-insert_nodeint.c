#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given position in linked list
 * @head: pointer to head pointer
 * @idx: position new node will be inserted into
 * @n: new node's value
 * Return: new node address or 0
 * made at night
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nxt, *place = malloc(sizeof(listint_t));
	unsigned int c = 0;

	if (head == NULL || place == NULL)
		return (NULL);

	place->n = n;
	place->next = NULL;
	if (idx == 0)
	{
		place->next = *head;
		*head = place;
		return (place);
	}
	nxt = *head;
	while (nxt)
	{
		if (c == idx - 1)
		{
			place->next = nxt->next;
			nxt->next = place;
			return (place);
		}
		c++;
		nxt = nxt->next;
	}
	free(place);
	return (NULL);
}
