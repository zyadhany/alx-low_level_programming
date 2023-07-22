#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start
 * Return:0
*/

int main(void)
{

int a, b, c, d, f;
for (a = '0'; a <= '9'; a++)
{
for (b = a; b <= '9'; b++)
{
f = 1;
for (c = a; c <= '9'; c++)
{
for (d = b + f; d <= '9'; d++)
{
f = 0;
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if (a != '9' || b != '8' || c != '9' || d != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
}

putchar('\n');

return (0);

}
