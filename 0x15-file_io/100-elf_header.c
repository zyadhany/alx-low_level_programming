#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



/**
 * main - check the code
 * @ac: num of arg
 * @av: arr of arg
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) ac, char *av[])
{
	int fn, r;

	fn = open(av[1], O_RDONLY);
	if (fn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		exit(98);
	}


	if (close(fn) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fn);
		exit(98);
	}
	return (0);
}
