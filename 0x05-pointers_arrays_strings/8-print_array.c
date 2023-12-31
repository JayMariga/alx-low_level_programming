#include "main.h"
#include <stdio.h>

/**
 * print_array - should print `n` elements of an array of integers
 * @a: int type of the array pointer
 * @n: int type of an integer
 * Description: Numbers should be separated by comma and space.
 * Numbers must be displayed in the same order they are stored in array.
 * only use _putchar to print.
 *
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");

}
