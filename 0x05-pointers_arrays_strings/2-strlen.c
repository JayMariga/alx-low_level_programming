#include "main.h"

/**
 * _strlen - should help find the length of a string
 * @s: pointer to the string to check length
 *
 * Return: void
*/


int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
