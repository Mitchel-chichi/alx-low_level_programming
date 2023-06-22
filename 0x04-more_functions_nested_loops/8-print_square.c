#include "main.h"

/**
 * print_square - it prints squares
 * @size: - it is the square size
*/

void print_square(int size)
{
int p, g;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (p = 0; p < size; p++)
{
for (g = 0; g < size; g++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
