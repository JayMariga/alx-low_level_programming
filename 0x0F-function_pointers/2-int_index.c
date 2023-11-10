#include "function_pointers.h"

/**
 * int_index - Should search for an integer
 * @array: Will be an array of elements
 * @size: Will be the size if the array
 * @cmp: Will be pointer to the function to be used to compare values
 *
 * Return: The index first element cmp function does not return 0
 * If zero element matches, return -1
 * If the size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
}
return (-1);
}
