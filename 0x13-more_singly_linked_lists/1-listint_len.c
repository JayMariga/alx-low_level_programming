#include "lists.h"

/**
 * listint_len - Should calculate the no. of elements.
 * @h: Will be a pointer to a list.
 *
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cnr = 0;

	tp = h;
	while (tp)
	{
		cnr++;
		tp = tp->next;
	}
	return (cnr);
}
