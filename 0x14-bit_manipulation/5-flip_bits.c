#include "main.h"

/**
 * flip_bits - Help find how many bits to be flipped in order to get
 * from one num to another.
 *
 * @n: A number value
 * @m: Another number value
 *
 * Return: The bits differ
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int difference;

	/* Xor the two numberss to show bit 1 if different bits */
	difference = n ^ m;

	/**
	 * Continue looking if for difference to the
	 * right and tallying the ones up
	 */
	do {
		diff_bits += (difference & 1);
		difference >>= 1;
	} while
		(difference > 0);

	return (diff_bits);
}
