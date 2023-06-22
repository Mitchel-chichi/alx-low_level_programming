#include "main.h"

/**
 * print_diagonal - it draws on terminal diagonal lines
 * @n: - number of times to print
*/

void print_diagonal(int n)
{
int r, w;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (r = 0; r < n; r++)
{
for (w = 0; w < r; w++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
