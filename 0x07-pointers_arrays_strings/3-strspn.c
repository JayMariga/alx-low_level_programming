#include "main.h"

/**
* _strspn - Should get the length of a prefix substring.
* @s: The string where substring will look.
* @accept: The substring of accepted chars.
*
* Return: is the Length of occurrence.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int c = 0;
char *t = accept;

while (*s++)
{
while (*accept++)
if (*(s - 1) == *(accept - 1))
{
c++;
break;
}
if (!(*--accept))
break;
accept = t;
}
return (c);
}
