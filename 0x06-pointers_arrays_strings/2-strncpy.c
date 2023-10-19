#include "main.h"

/**
 * *_strncpy - should copy a string
 * @dest: is the pointer to the string
 * @src: is the pointer array
 * @n: an int value
 *
 * Return: destination
*/


char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
