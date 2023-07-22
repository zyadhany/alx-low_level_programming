#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start
 * Return:0
*/

int main(void)
{

int n, k;

srand(time(0));
n = rand() - RAND_MAX / 2;
k = n;
n = k % 10;

printf("Last digit of %d is %d and is ", k, n);

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
