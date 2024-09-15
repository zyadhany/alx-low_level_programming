#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (j % 2 == 0)
			{
				printf("%02x", b[i + j]);
			}
			else
			{
				printf("%02x ", b[i + j]);
			}
		}
		for (j = 0; j < 10; j++)
		{
			if (b[i + j] < 32 || b[i + j] > 126)
			{
				printf(".");
			}
			else
			{
				printf("%c", b[i + j]);
			}
		}
		if (i + 10 < size)
		{
			printf("\n");
		}
	}
	printf("\n");
}
