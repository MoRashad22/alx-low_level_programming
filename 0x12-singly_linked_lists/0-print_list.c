#include "lists.h"

/**
 * _strlen - gives string length
 * @s: string length to be checked
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int a = 0;

	if (!s)
		return (0);
	while (*s++)
		a++;
	return (a);
}

/**
 * print_list - prints linked list elements
 * @h: first node pointer
 *
 * Return: list size
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)";
		h = h->next;
		x++;
	}
	return (x);
}
