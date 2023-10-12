#include "main.h"

/**
 * print_square - should check for a digit to be included.
 * @n : number of (#) to be printed
 *
 * Return:void
 */

void print_square(int n)
{

int i = 0, ii;

while (i < n && n > 0)
{
ii = 0;
while (ii < n)
{
_putchar('#');
ii++;
}

_putchar('\n');
i++;
}
if (i == 0)
_putchar('\n');

}
