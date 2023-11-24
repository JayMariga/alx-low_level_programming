#include "main.h"

/**
 * set_bit - Will set bit to 1 at any given index
 * @n: A number value.
 * @index: Will be the index within the binary number
 *
 * Return: 1 if it's a success, or -1 if it's an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int mask = 1;

	/* This is to make sure index isn't out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* Mask with 1 at a certain index to work on that index */
	mask <<= index;
	*n = (*n | mask);

	return (1);
}
