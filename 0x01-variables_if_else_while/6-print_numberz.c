#include <stdio.h>
/**
 * main - should main block
 * Description: prints all single digit numbers of base 10
 * starts from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
