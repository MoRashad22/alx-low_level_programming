#include "lists.h"


/**
 * print_list - prints linked list elements
 * @h: first node pointer
 *
 * Return: list size
 */
size_t print_list(const list_t *h)
{
	size_t truth;

	truth = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		truth++;
	}
	return (truth);
}
