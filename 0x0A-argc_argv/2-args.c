#include <stdio.h>

/**
 * main - Aimed at printing all the arguments it receives
 * @argc: Is the number of  args
 * @argv: Will be the arr args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
return (0);
}
