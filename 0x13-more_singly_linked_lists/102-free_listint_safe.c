#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - freeing listint list
 * @h: list's head
 *
 * Return: number of freed nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t npt = 0;

	int fre;

	listint_t *truth;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		fre = *h - (*h)->next;
		if (fre > 0)
		{
			truth = (*h)->next;
			*h = truth;
			npt++;
		}
		else
		{
			*h = NULL;
			npt++;
			break;
		}
	}
	*h = NULL;

	return (npt);
}
