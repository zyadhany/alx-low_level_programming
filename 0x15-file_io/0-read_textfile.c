#include "main.h"


/**
 * read_textfile - print text of file
 * @filename: the file name
 * @n: number of char to bbe printed
 *
 * Return: pointer to list
 */

ssize_t read_textfile(const char *filename, size_t n)
{
	ssize_t r, w, fn;
	char *buff;


	if (!filename)
		return (0);
	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);
	buff = malloc(sizeof(char) * n);
	if (!buff)
		return (0);

	r = read(fn, buff, n);
	w = write(1, buff, r);

	free(buff);
	close(fn);

	if (r != w)
	{
		return (0);
	}


	return (w);
}
