#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - should print to number 98
 * @n :The number to start from
 * Return:should be 0 or 1
 */

void print_to_98(int n)
{

while (n < 98)
{
	printf("%i, ", n);
	n++;
}
while (n > 98)
{
	printf("%i, ", n);
	n--;
}

printf("98");
putchar('\n');
}
