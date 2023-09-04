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
	ssize_t r, fn, w;
	char *buff;

	buff = malloc(sizeof(char) * n);

	if (!filename || !buff)
		return (0);
	fn = open(filename, O_RDONLY);
	if (!fn)
		return (0);


	r = read(fn, buff, n);
	w = write(1, buff, r);


	free(buff);
	close(fn);
	return (w);
}