#include "lists.h"

/**
 * print_list - prints linked list elements
 * @h: first node pointer
 *
 * Return: list size
 */
size_t print_list(const list_t *h);
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}
	retrun (x);
}
