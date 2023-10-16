#include "main.h"
/**
 * print_rev - should print a reversed string, followed by a new line
 * @s: pointer to the string that is to be printed
 *
 * Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
