#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * creatBuff - malloc buffer
 * @file: cp to file name
 *
 * Return: buffer pointer
 */
char *creatBuff(char *file)
{
	char *buff = malloc(sizeof(char) * 1024);

	if (!buff)
	{
		dprintf(2, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * closeFile - close the file
 * @file: file to close
 *
 */
void closeFile(int file)
{
	int n;

	n = close(file);

	if (n == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - check the code
 * @ac: num of arg
 * @av: arr of arg
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fn, fo, r = 1, w;
	char *buff;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fn = open(av[1], O_RDONLY);
	fo = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	buff = creatBuff(av[2]);

	while (r > 0)
	{
		r = read(fn, buff, 1024);
		if (r == -1 || fn == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			free(buff);
			exit(98);
		}

		w = write(fo, buff, r);
		if (w == -1 || fo == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			free(buff);
			exit(99);
		}
	}

	free(buff);
	closeFile(fn);
	closeFile(fo);

	return (0);
}
