#include "main.h"

/**
 * malloc_checked - Should allocate memory using malloc
 * @b: Will be the no. of bytes allocate
 *
 * Return: pointer
 */


void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
	exit(98);
return (ptr);
}
