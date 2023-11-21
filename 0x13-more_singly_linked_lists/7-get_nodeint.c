#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Should help find a node in a list.
 * @head: This is the address of the first node in a list.
 * @index: Is the position of the node to find (as from 0).
 *
 * Return: Node address.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;

	if (head == NULL)
		return (NULL);
	for (y = 0; y < index; y++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
