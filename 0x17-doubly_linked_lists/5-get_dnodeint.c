#include "lists.h"

/**
 * get_dnodeint_at_index - returns node
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: 1
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}