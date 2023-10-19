#include "main.h"

/**
 * _strcmp - should compare two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: (0) if is matching, and ns1 - ns2 if not matching
*/

int _strcmp(char *s1, char *s2)
{

int i;

/**
 * Have reached the end of S1 OR end of S2
*/

for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (0);

}
