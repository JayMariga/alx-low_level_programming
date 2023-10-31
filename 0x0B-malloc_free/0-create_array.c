#include "main.h"

/**
 *create_array - An array that should print a string
 *@size: Is the number elements in the array
 *@c: The character value

 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;

if (size == 0)
{
	return (NULL);
}

/*Help to define values with malloc*/
buffer = (char *) malloc(size * sizeof(c));

if (buffer == 0)
{
	return (NULL);
}

else
{
	position = 0;
	while (position < size) /*While for the array*/
	{
		*(buffer + position) = c;
		position++;
	}

	return (buffer);
}

}
