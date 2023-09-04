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
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
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
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - check the code
 * @argc: num of arg
 * @argv: arr of arg
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fn, fo, r, w;
	char c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fn = open(argv[1], O_RDONLY);
	r = read(fn, &c, 1);
	fo = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);

	do {
		if (r == -1 || fn == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		w = write(fo, &c, r);
		if (w == -1 || fo == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	    r = read(fn, &c, 1);
		fo = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);


	closeFile(fn);
	closeFile(fo);

	return (0);
}
