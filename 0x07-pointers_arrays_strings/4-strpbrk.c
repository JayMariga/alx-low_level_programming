#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search a string of a set of bytes
 * @s: The pointer to char
 * @accept: The pointer to char
 *
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return (NULL);
}
