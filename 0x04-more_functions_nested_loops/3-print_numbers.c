#include "main.h"

/**
 * print_numbers -should print numbers from 0-9
 * Return:is expected to be 0
 */

void print_numbers(void)
{
char n = 0;

while (n <= 9)
{
_putchar('0' + n);
n++;

}
_putchar('\n');

}
