#include <stdlib.h>
#include <time.h>

/**
 * main - start
 * Return:0
*/

int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d is ", n);

if (n > 0)
{
printf("positive\n");
}
else if (n == 0)
{
printf("zero\n");
}
else
{
printf("negative\n");
}

return (0);

}
