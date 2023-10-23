#include "main.h"

/**
 * _strchr - should print where a char is located
 * @s: this is pointer to char
 * @c: the char params to found
 * Return: *S
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0);
}
