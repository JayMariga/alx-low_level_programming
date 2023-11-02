#include "main.h"

/**
 * _memset - copy char to specified value
 * @s:A  string
 * @b: B input
 * @n: No. of bytes
 *
 * Return: string
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

/**
 * _calloc - Should allocate memory for an array using malloc
 * @nmemb: Is the n elements
 * @size: In bytes
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;

if (nmemb == 0 || size == 0)
	return (NULL);
p = malloc(nmemb * size);

if (p == NULL)
	return (NULL);
_memset(p, 0, (nmemb * size));
return (p);
}
