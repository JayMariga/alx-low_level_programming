#include "main.h"

/**
 * print_line - should check for a digit
 * @n : number of _ is to be printed in inreasement
 * Return:void
 */

void print_line(int n)
{

int i = 0;

while (i < n && n > 0)
{
_putchar('_');
i++;
}
_putchar('\n');

}
