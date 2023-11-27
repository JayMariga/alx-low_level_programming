#include "main.h"

/**
 * append_text_to_file - Should append text to a end of a file
 * @filename: File passed as argument
 * @text_content: The text to write in file
 *
 * Return: @1 if it is a success and @-1 if it is a fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int w, file, cnt = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[cnt])
		cnt++;
	w = write(file, text_content, cnt);
	if (w == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
