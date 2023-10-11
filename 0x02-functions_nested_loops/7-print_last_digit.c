#include "main.h"

/**
 * print_last_digit - should print the last digit of a specific number
 * @n:  will be the int that will use for the argument of the function
 * Return: should give the integer value
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
