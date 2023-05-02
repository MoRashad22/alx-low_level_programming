#include "lists.h"
/**
 * get_nodeint_at_index - returnning nth node of linked list
 * @head: pointing to head of list
 * @index: node's index
 *
 * Return: node's address
 * made at night
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *arrow;
	unsigned int r;

	for (r = 0; arrow && r < index; arrow = head, arrow = arrow->next, r++)
		;
	return (arrow);
}
