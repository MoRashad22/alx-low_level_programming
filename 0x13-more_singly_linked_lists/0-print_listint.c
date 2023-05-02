#include "lists.h"
/**
 * print_listint - printing the linked list's elements
 * @h: list's head
 *
 * Return: the list's size
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
