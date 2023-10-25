#include "main.h"

/**
 * _puts_recursion - Help to print a string, the followed by a new line
 * @s: Is shown a pointer to the string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{

if (*s == '\0')
{
	_putchar('\n');
}
else
{
	_putchar(*s);
	_puts_recursion(s + 1);
}

}
