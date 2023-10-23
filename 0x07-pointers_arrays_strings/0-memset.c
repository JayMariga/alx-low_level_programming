#include "main.h"

/**
 * _memset - fills memory
 * @s: a pointer to character params
 * @b: the data to change
 * @n: will be the index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
