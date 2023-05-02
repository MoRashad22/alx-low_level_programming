#include "lists.h"

/**
 * listint_len - printing linked list
 * @h: pointer to list's head
 *
 * Return: the list's size
 */
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
