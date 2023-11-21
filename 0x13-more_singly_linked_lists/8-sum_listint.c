#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Should sum all the data (n) in a list.
 * @head: Is the address of first node of the list.
 *
 * Return: An int value.
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
