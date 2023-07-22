#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start
 * Return:0
*/

int main(void)
{

char a;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
if (a < '9')
{
putchar(' ');
putchar(',');
}
}

putchar('\n');

return (0);

}
