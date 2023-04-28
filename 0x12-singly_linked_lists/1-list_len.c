#include "lists.h"

/**
 * list_len - gives linked list length
 * @h: single linked list
 * Return: elements number in list
 * made at mornin
 */
size_t list_len(const list_t *h)
{
	size_t truth = 0;

	while (h != NULL)
	{
		h = h->next;
		truth++;
	}
	return (truth);
}
