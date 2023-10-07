#include <stdio.h>
#include <stdlib.h>
/**
 * main -should be the Entry point
 * Description: prints all single digit numbers of base 16
 * starts from 0, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
