#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, suma = 0, res = 0;
	int money[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]);

	if (res < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		suma += res / money[i];
		res %= money[i];
	}

	printf("%d\n", suma);

	return (0);
}
