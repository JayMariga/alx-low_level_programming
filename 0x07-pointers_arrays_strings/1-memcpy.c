#include "main.h"

/**
 * _memcpy - should copy n bytes from memory area
 * @dest: is the pointer to char params
 * @src: a pointer to char params
 * @n: size of the memory
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
