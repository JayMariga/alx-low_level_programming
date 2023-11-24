#include "main.h"

/**
 * get_endianness - Will check if data is stored as
 * little endian  or big endian.
 *
 * Return: The first value stored, 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	/* We test if 1st byte stored is 00 or 01 */
	/* little endian would store 01 */
	/* Big endian would store 00 */

	int n = 0x00000001;
	char *c = (char *)&n;

	return (c[0]);
}
