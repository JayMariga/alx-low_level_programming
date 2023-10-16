#include "main.h"

/**
 * swap_int - should swap the variable values
 * @a: pointer 1(one
 * @b: pointer 2(two
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a = *a - *b;
}
