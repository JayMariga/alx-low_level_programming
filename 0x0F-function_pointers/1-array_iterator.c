#include <stdio.h>

/**
 * array_iterator - Will execute a funct
 * @array: An array of elements
 * @size: The array's size
 * @action: Act as a pointer to function
 *
 * Return: No
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array && size && action)
{
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
}
