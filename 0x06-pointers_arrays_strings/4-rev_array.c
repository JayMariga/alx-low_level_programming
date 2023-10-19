#include "main.h"

/**
 * reverse_array - should reverse an int array
 * @a: should be pointer
 * @n: is the array length
 *
 * Return: (void)
*/

void reverse_array(int *a, int n)
{
int i = 0, half;

for (half = n / 2; half > 0; half--, i++)
{
a[n - i - 1] += a[i];
a[i] = a[n - i - 1] - a[i];
a[n - i - 1] = a[n - i - 1] - a[i];
}
}
