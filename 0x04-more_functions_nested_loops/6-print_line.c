#include "main.h"

/**
 * print_line - it draws a line that is straight
 * @n: - it is the number of lines drawn
*/

void print_line(int n)
{
int t;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (t = 0; t < n; t++)
{
_putchar('_');
}
_putchar('\n');
}
}
