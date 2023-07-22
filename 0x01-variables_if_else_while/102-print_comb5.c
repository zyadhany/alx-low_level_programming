#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start
 * Return:0
*/

int main(void)
{

int a, b, c, d, f, g;
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
f = 1 + b;
f %= 58;
if (f == 0)
g = a + 1;
else
g = a;
for (c = g; c <= '9'; c++)
{
for (d = f; d <= '9'; d++)
{
f = '0';
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
