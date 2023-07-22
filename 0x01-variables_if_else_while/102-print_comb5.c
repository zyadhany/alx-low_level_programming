#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start
 * Return:0
*/

int main(void)
{

int a, b, c, d;
for (a = '0'; a <= '9'; a++)
{
for (b = a; b <= '9'; b++)
{
for (c = a; c <= '9'; c++)
{
for (d = b + 1; c <= '9'; c++)
{
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
