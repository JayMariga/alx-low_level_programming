#include "function_pointers.h"

/**
 * print_name - Will print a name
 * @name: Is the name's main
 * @f: Will be a void function
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
	f(name);
}
}
