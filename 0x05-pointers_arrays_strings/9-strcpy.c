#include "main.h"

/**
 * *_strcpy -  should copy the string pointed to by the src
 * @dest: char type the string
 * @src: char type the string
 * Description: should Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 *
 * Return: should Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
