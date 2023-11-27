#include "main.h"

/**
 * read_textfile - A func that open or read or print N bytes
 * @filename: File name passed as argument
 * @letters: The no. of letters to print as well as size of the array;
 *
 * Return: The ammount of letter he read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int w, file, result;
	char *buf;

	buf = malloc(sizeof(char) * letters + 1);
	if (!buf || !filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		close(file);
		free(buf);
		return (0);
	}
	result = read(file, buf, letters);
	if (result == -1)
	{
		close(file);
		free(buf);
		return (0);
	}
	buf[result] = '\0'; /*No char at the end*/
	w = write(STDOUT_FILENO, buf, result);
	if (w == -1)
	{
		close(file);
		free(buf);
		return (0);
	}
	close(file);
	free(buf);
	return (result);
}
