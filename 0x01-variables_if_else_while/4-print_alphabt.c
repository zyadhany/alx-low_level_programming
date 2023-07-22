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
for (a = 'a'; a <= 'z'; a++)
{
if (a != 'q' && a != 'e')
putchar(a);
}
putchar('\n');

return (0);

}
