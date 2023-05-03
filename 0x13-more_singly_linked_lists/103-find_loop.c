#include "lists.h"
/**
 * find_listint_loop - finding loop in the linked list
 * @head: linked list that should be searched
 * Return: node's address
 * made at night
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pon, *fin;

	if (!head)
		return (NULL);
	for (fin = head->next; fin != NULL; fin = fin->next)
	{
		if (fin == fin->next)
			return (fin);
		for (pon = head; pon != fin; pon = pon->next)
			if (pon == fin->next)
				return (fin->next);
	}
	return (NULL);

}
