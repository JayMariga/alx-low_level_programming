#include "main.h"
/**
 * puts2 - should print a string, followed by a new line,
 * @str: pointer to the string tat is to be printed
 *
 * Return: void
*/

void puts2(char *str)
{
        int i = 0;

        while (str[i] != '\0')
        {
                if (i % 2 == 0)
                {
                        _putchar(str[i]);
                }

                i++;
        }
        _putchar('\n');
}
