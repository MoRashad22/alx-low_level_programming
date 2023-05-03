#include "lists.h"
/**
 * delete_nodeint_at_index - removing node at given index in a list
 * @head: address of a head pointer
 * @index:the  index of node to be deleted
 *
 * Return: 1 (success), -1 (failed)
 * made at night
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nd, *dlt;
	unsigned int c = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		nd = *head;
		*head = (*head)->next;
		free(nd);
		return (1);
	}
	nd = *head;
	while (nd)
	{
		if (c == index)
		{
			dlt->next = nd->next;
			free(nd);
			return (1);
		}
		c++;
		dlt = nd;
		nd = nd->next;
	}
	return (-1);
}
