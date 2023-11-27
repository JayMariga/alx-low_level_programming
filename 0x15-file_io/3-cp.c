#include "main.h"

/**
 * error97 - Should print error if wrongly used
 * @arguments: A list of args
 *
 * Return: void
 */

void error97(int arguments)
{
	if (arguments != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * error98 - Should print error if wrongly used
 * @file: Will be the file that is implicated
 *
 * Return: void
 */

void error98(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * error99 - Should print error if file can't be written
 * @file: Will be the file that is implicated
 *
 * Return: void
 */

void error99(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * error100 - Should print error if file can't be closed
 * @file: Will be the file that is implicated
 *
 * Return: void
 */

void error100(int file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
	exit(100);
}

/**
 * main - Copies the content to other file
 * @argc: The number of arguments
 * @argv: Is the list of arguments given
 *
 * Return: 98 99 100 if it fails and @0 if it is a success
 */

int main(int argc, char **argv)
{
	int file, file2, w, c, r = -1;
	char s[1024] = {0};

	error97(argc);
	file = open(argv[1], O_RDONLY);
	if (file == -1)
		error98(argv[1]);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file2 == -1)
		error99(argv[2]);
	while (r)
	{
		r = read(file, s, 1024);
		if (r == -1)
			error98(argv[1]);
		if (r)
		{
			w = write(file2, s, r);
			if (w == -1)
				error99(argv[2]);
		}
	}
	c = close(file);
	if (c == -1)
		error100(file);
	c = close(file2);
	if (c == -1)
		error100(file2);
	return (0);
}
