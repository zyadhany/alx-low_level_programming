#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start
 * Return:0
*/

int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
n %= 5;

printf("%d and is ", n);

if (n > 5)
{
printf("greater than 5\n");
}
else if (n == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}

return (0);

}
