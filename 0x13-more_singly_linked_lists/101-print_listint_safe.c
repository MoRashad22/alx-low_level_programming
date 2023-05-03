#include "lists.h"
/**
 * print_listint_safe - safely printing linked list
 * @head: list need to be printed
 *
 * Return: nodes' number
 * made at night
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nbr = 0;
	 int c;

	while (head)
	{
		c = head - head->next;
		nbr++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (c > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (nbr);
}
