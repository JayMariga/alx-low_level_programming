#include "main.h"

/**
 * _isupper -should check if the char is uppercase
 * @c:  should be the int that will be used for the argument of the function
 * Return: 1 if uppercase character and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
