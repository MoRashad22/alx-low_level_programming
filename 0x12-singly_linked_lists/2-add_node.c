#include "lists.h"

/**
 * add_node - makes new node at the beginning of list_t list
 * @head: pointing to head pointer
 * @str: string
 *
 * Return: the size of the list
 * made at mornin
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *changed = malloc(sizeof(list_t));

	if (!head || !changed)
		return (NULL);
	if (str)
	{
		changed->str = strdup(str);
		if (!changed->str)
		{
			free(changed);
			return (NULL);
		}
		changed->len = _strlen(changed->str);
	}

	changed->next = (*head);
	*head = changed;
	return (changed);
}
