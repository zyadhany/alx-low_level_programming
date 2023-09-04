#include "main.h"


/**
 * append_text_to_file - print text of file
 * @filename: the file name
 * @text_content: text to write
 *
 * Return: pointer to list
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int w, fn, n = 0;

	if (!filename)
		return (-1);

	if (text_content)
		for (n = 0; text_content[n] != '\0';)
			n++;


	fn = open(filename, O_WRONLY | O_APPEND);
	w = write(fn, text_content, n);

	if (w == -1 || fn == -1)
	{
		return (-1);
	}


	close(fn);
	return (1);
}
