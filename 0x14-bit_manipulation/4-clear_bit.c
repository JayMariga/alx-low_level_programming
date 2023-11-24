#include "main.h"

/**
 * clear_bit - Make sure bit is 0 at given index
 * @n: A number value
 * @index: Will be the index within the binary number
 *
 * Return: 1 if it's a success, or -1 if it's an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bits;
	unsigned long int mask = 1;

	/* This is to make sure index isn't out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* Mask with 0 at a certain index to work on that index */
	mask = ~(mask << index);
	*n = (*n & mask);

	return (1);
}
