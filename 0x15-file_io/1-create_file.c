#include "main.h"

/**
 * create_file - Should create a file later inserts text into it
 * @filename: File passed as argument
 * @text_content: The text to include into the file
 *
 * Return: @1 if it is a success and @-1 if it is a fail
 */

int create_file(const char *filename, char *text_content)
{
	int w, file, cnt = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
	{
		close(file);
		return (-1);
	}
	if (text_content == NULL)
		w = write(file, "", 0);
	else
	{
		while (text_content[cnt])
			cnt++;
		w = write(file, text_content, cnt);
	}
	if (w == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
