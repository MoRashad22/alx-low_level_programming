#include "lists.h"
/**
 * free_listint_safe - freeing listint list
 * @h: list's head
 *
 * Return: number of freed nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l;

	l = 0;

	listint_t *truth;

	int fre;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		fre = *h - (*h)->next;
		if (fre > 0)
		{
			truth = (*h)->next;
			*h = truth;
			l++;
		}
		else
		{
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
