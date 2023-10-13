#include "main.h"

/**
 * largest_number - should return the largest of the 3 numbers
 * @a: integer 1
 * @b: integer 2
 * @c: integer 3
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a > b && a > c)
{
	largest = a;
}
else if (b > c && b > a)
{
	largest = b;
}
else if (c > b)
{
	largest = c;
}
else
{
	largest = b;
}

return (largest);
}
