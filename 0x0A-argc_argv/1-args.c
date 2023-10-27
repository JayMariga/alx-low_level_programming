#include <stdio.h>

/**
 * main - Should print its name, then followed by a new line
 * @argc: Is the n args
 * @argv: Will be the arr args
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
if (argc > 0)
	printf("%d\n", argc - 1);
return (0);
}
