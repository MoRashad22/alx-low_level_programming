#include "lists.h"
#include <stdio.h>

/**
 * free_list - freeing the list's node
 * @head: linked list's head
 *
 * Return: nothing to return
 * made at mornin
 */
void free_list(list_t *head)
{
	list_t *pin;

	while ((pin = head) != NULL)
	{
		head = head->next;
		free(pin->str);
		free(pin);
	}
}
