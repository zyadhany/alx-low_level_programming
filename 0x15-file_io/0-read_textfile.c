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
	ssize_t k = 0, w;
	size_t i;
	char c, *buff;


	if (!filename)
		return (0);
	fn = fopen(filename, "r");
	if (!fn)
		return (0);
	buff = malloc(sizeof(char) * n);
	if (!buff)
		return (0);


	for (i = 0; i < n && (c = fgetc(fn)) != EOF; i++)
	{
		buff[k] = c;
		k++;
	}

	w = write(1, buff, k);

	free(buff);
	fclose(fn);

	if (w != k)
	{
		return (0);
	}


	return (k);
}
