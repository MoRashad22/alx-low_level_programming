#include "lists.h"

/**
 * add_node_end - adding node to the end of the list
 * @head: linked list's head
 * @str: string put into new node
 * Return: size of the list
 * made in the mornin
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_changed = malloc(sizeof(list_t));
	list_t *dode = *head;

	if (!head || !node_changed)
		return (NULL);
	if (str)
	{
		node_changed->str = strdup(str);
		if (!node_changed->str)
		{
			free(node_changed);
			return (NULL);
		}
		node_changed->len = _strlen(node_changed->str);
	}
	if (dode)
	{
		while (dode->next)
			dode = dode->next;
		dode->next = node_changed;
	}
	else
		*head = node_changed;
	return (node_changed);
}
