#include "main.h"

/**
 * _print_rev_recursion - Should print a string followed by a new line
 * @s: This is the pointer to the string
 *
 * return: void
 */

void _print_rev_recursion(char *s)
{
if (*s > '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}

}
