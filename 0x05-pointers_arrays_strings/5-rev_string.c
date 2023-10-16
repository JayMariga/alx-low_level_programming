#include "main.h"
/**
 * rev_string - should print reversed string, followed by a new line
 * @s: pointer to the string to be printed
 *
 * Return: void
*/

void rev_string(char *s)
{

	int len, i, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	;

	i = 0;

	half = len / 2;

	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}

}
