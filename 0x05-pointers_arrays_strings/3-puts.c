#include "main.h"
/**
 * _puts - should print a string, followed by a new line,
 * @str: pointer to the string that is to be printed
 *
 * Return: void
*/


void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
