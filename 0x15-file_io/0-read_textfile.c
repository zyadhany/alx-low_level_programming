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
	FILE *fn;
	ssize_t k = 0, j;
	size_t i;
	char c, *buff;

	buff = malloc(sizeof(char) * n);

	if (!filename || !buff)
		return (0);
	fn = fopen(filename, "r");
	if (!fn)
		return (0);


	for (i = 0; i < n && (c = fgetc(fn)) != EOF; i++)
	{
		buff[k] = c;
		k++;
	}

	write(1, buff, k);


	free(buff);
	fclose(fn);
	return (k);
}